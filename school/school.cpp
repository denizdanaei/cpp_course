// School class containing a list of students and courses

#include "school.hpp"

#include <iostream>

#include "course.hpp"
#include "student.hpp"

School::School(const std::string& name) : name(name) {
    // Constructor initializes the school's name
}
School::~School() {
    // Destructor to clean up dynamically allocated memory
    for (Student* student : students) {
        delete student;  // Delete each student object
    }
    for (Course* course : courses) {
        delete course;  // Delete each course object
    }
}
Student* School::add_student(const std::string& student_name) {
    // Add a student to the school
    students.push_back(new Student(student_name));
    return students.back();  // Return a pointer to the newly added student
}
Course* School::add_course(const std::string& course_name) {
    // Add a course to the school
    courses.push_back(new Course(course_name));
    return courses.back();  // Return a pointer to the newly added course
}
const std::string& School::get_name() const {
    // Get the name of the school
    return name;
}

void School::print_students(const std::string& course_name) const {
    // Print students enrolled in a specific course
    for (const Course* course : courses) {
        if (course->get_name() == course_name) {
            std::string result = "Students enrolled in " + course_name + ":\n";
            for (const Student* student : course->get_students()) {
                result += student->get_name() + " \n";
            }
            std::cout << result;
        }
    }
}
