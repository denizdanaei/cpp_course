// Student class header file
#ifndef STUDENT_HPP
#define STUDENT_HPP
#include <string>
#include <vector>

class Student {
  public:
    Student(const std::string& name);  // Constructor
    Student(const Student& other);     // Copy constructor
    ~Student();                        // Destructor
    void add_grade(double grade);
    const std::string& get_name() const;
    double get_average() const;
    static bool is_average_grater_than(const Student& student_1, const Student& student_2);
    static int get_instance_count();

  private:
    std::string name;
    std::vector<double> grades;
    static int instance_count;
};

#endif
