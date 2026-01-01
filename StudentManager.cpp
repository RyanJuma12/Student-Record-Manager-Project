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

}

void StudentManager::loadStudents(const std::string &filename) {

}
