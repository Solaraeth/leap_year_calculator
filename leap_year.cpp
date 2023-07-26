#include <iostream>

int main() {

    int year = 0;
    
    //Asks user to input a year and assgins that to the variable year
    std::cout << "Input year after 1582 (first year of Gregorian calender): ";
    std::cin >> year;

    //if year is after 1582 and the modulo of year is equal to 0 the user is told that their year is a leap year
    if (year > 1582 && year % 4 == 0) {
        
        std::cout << "The year " << year << " is a leap year\n";
    }

    //if the modulo of the year is not equal to 0 the user is told that their year is not a leap year
    else if (year > 1582 && year % 4 != 0) {

        std::cout << "The year " << year << " is not a leap year\n";
    }

    else {

        std::cout << "Invalid input\nThe year must be greater than 1582\n";
    }
    

    



}