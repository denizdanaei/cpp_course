// Student Manager class functions

#include "student.hpp"
#include <iostream>
#include "student_manager.hpp"


StudentManager::~StudentManager(){
    for (Student* student: m_students) {
        delete student;
    }
}

void StudentManager::add_student(std::string name, const double& gpa, const int& id) {
    Student *student = new Student(name, gpa, id);
    m_students.push_back(student);
}

double StudentManager::get_topper() const {
    double topper;
    Student* top;
    if (m_students.size()>0) {
        for (Student* student: m_students) {
                double tmp = student->get_gpa();
                if (tmp>topper){
                    topper = tmp;
                    top = student;
                }
            }

            std::cout << "The top gpa is for" << std::endl;
            top->print_info();
    }
    else {
        std::cout << "No student record exists!" << std::endl;
    }
    return topper;
}

void StudentManager::print_all() const {

    for (Student* student: m_students){student->print_info();}
}