// Student manager class header file

#pragma once
#include <vector>
#include "student.hpp"
#include <memory>


class StudentManager {
    public:
    StudentManager(){};
    ~StudentManager(){};
    void add_student(std::string name, double gpa, const int& id);
    const Student* get_topper() const;
    void print_all() const;

    private:
    std::vector<std::unique_ptr<Student>> m_students;
    
};
