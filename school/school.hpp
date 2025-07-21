// School class containing a list of students and courses
#ifndef SCHOOL_SCHOOL_HPP
#define SCHOOL_SCHOOL_HPP
#include <string>
#include <vector>

#include "course.hpp"
#include "student.hpp"

class School {
  public:
    School(const std::string& name);                   // Constructor
    ~School();                                         // Destructor
    Student* add_student(const std::string& student);  // Add a student to the school
    Course* add_course(const std::string& course);     // Add a course to the school
    const std::string& get_name() const;               // Get the name of the school
    void print_students(
        const std::string& course_name) const;  // Print students enrolled in a specific course
  private:
    std::string name;                // Name of the school
    std::vector<Student*> students;  // List of students in the school
    std::vector<Course*> courses;    // List of courses offered by the school
};
#endif
