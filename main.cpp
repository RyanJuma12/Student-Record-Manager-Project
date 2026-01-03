#include <iostream>
#include<string>
#include "Student.h"
#include "StudentManager.h"

void printMenu();
void getUserInput(int &ID, std::string &name, double &GPA);

int main() {

    int selection = 0;
    StudentManager SMobj;

    int ID;
    std::string name;
    double GPA;

    do {
    printMenu();

    std::cout << "Enter Mode: \n";
    std::cin >> selection;

    switch (selection) {
        case 1:
            getUserInput(ID, name, GPA);
            SMobj.addStudent(ID, name, GPA);
            break;
        case 2:
            SMobj.displayStudents();
            break;
        case 3:
            SMobj.saveStudents("students.txt");
            break;
        case 4:
            SMobj.loadStudents("students.txt");
            break;
        case 5:
            std::cout << "Exiting Program.\n";
            break;
        default:
            std::cout << "Invalid Selection!\n";
    }

    } while (selection !=5);

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

void getUserInput(int &ID, std::string &name, double &GPA) {
    std::cout << "Enter Student ID.\n";
    std::cin >> ID;

    std::cout << "Enter Student Name.\n";
    std::cin.ignore();
    std::getline(std::cin, name);

    std::cout << "Enter Student GPA.\n";
    std::cin >> GPA;
}
