// Student class containing a name, gpa, and roll number
#include <iostream>
#include "student.hpp"

Student::Student(const std::string& name, double& gpa, const int& id) : m_name(name), m_gpa(gpa), m_id(id) {
}
Student::Student(const Student& other) : m_name(other.m_name), m_id(other.m_id),m_gpa(other.m_gpa) {}
Student::~Student() {}

void Student::set_gpa(double gpa) {
    m_gpa = gpa;
}

double Student::get_gpa() const {
    return m_gpa;
}

const std::string& Student::get_name() const {
    return m_name;
}

void Student::add_id(int id) {
    m_id=id;
}

unsigned int Student::get_id() const {
 return m_id;
}


bool Student::is_gpa_greater_than(const Student& student_1, const Student& student_2) {
    return student_1.get_gpa() > student_2.get_gpa();
}

void Student::print_info() const{
std::cout << "Student: " << get_name() << " Id: " << get_id() << " GPA: " << get_gpa() << "\n" << std::endl;
}