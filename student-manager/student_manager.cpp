// Student Manager class functions

#include "student_manager.hpp"

#include <iostream>
#include <memory>

#include "student.hpp"

void StudentManager::add_student(std::string name, double gpa, const int& id) {
    m_students.push_back(std::make_unique<Student>(name, gpa, id));
}

const Student* StudentManager::get_topper() const {
    if (m_students.empty())
        return nullptr;

    const Student* top = m_students[0].get();

    for (const auto& student : m_students) {
        if (Student::is_gpa_greater_than(*student, *top))
            top = student.get();
    }

    std::cout << "Topper:\n";
    top->print_info();
    return top;
}

void StudentManager::print_all() const {
    for (const auto& student : m_students) {
        student->print_info();
    }
}