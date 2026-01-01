//
// Created by Ryan J on 12/31/2025.
//

#include <iostream>
#include<string>
#include "Student.h"
#include "StudentManager.h"

Student::Student(int x, std::string y, double z)
    :ID(x), name(y), GPA(z)
{
}

int Student::getID() const {
    return ID;
}

std::string Student::getName() const {
    return name;
}

double Student::getGPA() const {
    return GPA;
}
