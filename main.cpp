#include <iostream>
#include<string>
#include "Student.h"
#include "StudentManager.h"

void printMenu();

int main() {

    char choice;
    int selection;

    do {

    printMenu();

    std::cout << "Enter Mode: \n";
    std::cin >> selection;


    switch (selection) {
        case 1:
            //Will call on an add student function
            break;
        case 2:
            //will call on a view student function
            break;
        case 3:
            //will call on a save to file function
            break;
        case 4:
            //will call on a load to file function
            break;
        case 5:
            //will break out of the menu
            break;
        default:
            std::cout << "Invalid Selection!\n";
    }

    std::cout << "Do you want to run the program again. (y/Y).\n";
    std::cin >> choice;

    } while (choice == 'y'  || choice == 'Y');

    std::cout << "Thanks for Using the Program.\n";
    return 0;
}

void printMenu() {
    std::cout << "==== Student Manager ====\n";
    std::cout << "1. Add Student\n";
    std::cout << "2. View Students\n";
    std::cout << "3. Save to file\n";
    std::cout << "4. Load from file\n";
    std::cout << "5.exit\n";
}