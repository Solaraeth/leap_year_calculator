#include <iostream>

int main() {

    int year = 0;

    bool validInput = false;

    // Validate the user input
    do {
        // Ask user to input a year and assgins that to the variable year
        std::cout << "Input year after 1582 (first year of Gregorian calender): ";
        std::string input;
        std::cin >> input;

        // Try to convert the input string to an integer
        try {
            year = std::stoi(input);
            validInput = true;

            // Check if the year is less than 1582
            if (year < 1582) {
                std::cout << "Error: invalid input.\nThe year must be greater than 1582.\n";
                validInput = false;
            }
        } 
        
        catch (const std::exception& e) {
            std::cout << "Error: invalid input.\nPlease enter a valid integer.\n";
        }

    } while (!validInput);

    // Identifies leap years divisible by both 100 and 400 and outputs as true for user
    if (year % 100 == 0 && year % 400 == 0) {
        
        std::cout << "The year " << year << " is a leap year.\n";

    }

    // Identifies leap years divisible by 4 but not 100 and outputs as true for user
    else if (year % 100 != 0 && year % 4 == 0) {

        std::cout << "The year " << year << " is a leap year.\n";

    }

    // Outputs false to user for the rest of the years
    else {

        std::cout << "The year " << year << " is not a leap year.\n";

    }
}
