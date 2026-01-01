//
// Created by Ryan J on 12/31/2025.
//

#ifndef STUDENT_RECORD_MANAGER_PROJECT_STUDENT_H
#define STUDENT_RECORD_MANAGER_PROJECT_STUDENT_H
#include<string>


class Student {
    public:
        Student(int x, std::string y, double z);
        int getID() const;
        std::string getName() const;
        double getGPA() const;
    private:
        int ID;
        std::string name;
        double GPA;

};



#endif //STUDENT_RECORD_MANAGER_PROJECT_STUDENT_H