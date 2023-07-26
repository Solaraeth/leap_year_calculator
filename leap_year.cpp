#include <iostream>

int main() {

    int year = 0;
    
    std::cout << "Input year: ";
    std::cin >> year;

    if (year % 4 == 0) {

        std::cout << "The year " << year << " is a leap year\n";
    }

    else {

        std::cout << "The year " << year << " is not a leap year\n";
    }

    

    



}