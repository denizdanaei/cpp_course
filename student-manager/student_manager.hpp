// Student manager class header file

#pragma once
#include <vector>
#include "student.hpp"


class StudentManager {
    public:
    StudentManager(){};
    ~StudentManager();
    void add_student(std::string name, const double& gpa, const int& id);
    double get_topper() const;
    void print_all() const;

    private:
    std::vector<Student*> m_students;
    
};
