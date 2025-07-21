// courses for school management system
#ifndef SCHOOL_COURSE_HPP
#define SCHOOL_COURSE_HPP
#include <string>
#include <vector>

#include "student.hpp"
class Course {
  public:
    Course(const std::string& name);
    void add_student(const Student* student);
    const std::string& get_name() const;
    std::vector<const Student*> get_students() const;

  private:
    std::string name;
    std::vector<const Student*> students;
};
#endif