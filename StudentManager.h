//
// Created by Ryan J on 12/31/2025.
//

#ifndef STUDENT_RECORD_MANAGER_PROJECT_STUDENTMANAGER_H
#define STUDENT_RECORD_MANAGER_PROJECT_STUDENTMANAGER_H
#include "Student.h"
#include <vector>


class StudentManager {
    public:
        StudentManager();
        void addStudent(int ID, std::string name, double GPA);
        void displayStudents() const;
        void saveStudents(const std::string& filename);
        void loadStudents(const std::string& filename);
    private:
        std::vector<Student> students;
};


#endif //STUDENT_RECORD_MANAGER_PROJECT_STUDENTMANAGER_H