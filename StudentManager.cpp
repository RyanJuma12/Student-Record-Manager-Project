//
// Created by Ryan J on 12/31/2025.
//

#include <iostream>
#include<string>
#include<fstream>
#include "Student.h"
#include "StudentManager.h"

StudentManager::StudentManager()
{
}

void StudentManager::addStudent(int ID, std::string name, double GPA) {
    Student newStudentobj(ID, name, GPA);
    students.push_back(newStudentobj);
}

void StudentManager::displayStudents() const {
    if (students.empty()) {
        std::cout << "There are No Students to Display.\n";
        return;
    }
    for (size_t i = 0; i < students.size(); ++i) {
        const Student& student = students[i];
        std::cout << "Student " << (i + 1) << ":\n";
        std::cout << "ID: " << student.getID() << "\n";
        std::cout << "Name: " << student.getName() << "\n";
        std::cout << "GPA: " << student.getGPA() << "\n\n";
    }
}

void StudentManager::saveStudents(const std::string &filename) {
    std::ofstream outFile(filename);

        if (!outFile.is_open()) {
            std::cout << "Error opening file for writing.\n";
            return;
        }
        for (const Student& s : students) {
            outFile << s.getID() << " "
                    << s.getName() << " "
                    << s.getGPA() << "\n";
        }
        outFile.close();
        std::cout << "Students saved successfully.\n";
}

void StudentManager::loadStudents(const std::string &filename) {
    std::ifstream infile(filename);

    if (!infile.is_open()) {
        std::cout << "Error opening file for reading.\n";
        return;
    }
    students.clear();

    int ID;
    std::string name;
    double GPA;

    while (infile >> ID >> name >> GPA) {
        Student s(ID, name, GPA);
        students.push_back(s);
    }
    infile.close();
    std::cout << "Students loaded successfully.\n";
}
