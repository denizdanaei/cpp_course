// courses for school management system

#include "course.hpp"

Course::Course(const std::string& name) : name(name) {
    // Constructor initializes the course's name
}
void Course::add_student(const Student* student) {
    // Add a student to the course
    students.push_back(student);
}
const std::string& Course::get_name() const {
    return name;
}

std::vector<const Student*> Course::get_students() const {
    return students;  // Return the list of students enrolled in the course
}