// Student class header file
#pragma once
#include <string>

class Student {
  public:
    Student(const std::string& name, double& gpa, const int& id);  // Constructor
    Student(const Student& other);                                 // Copy constructor
    ~Student();                                                    // Destructor

    void set_gpa(double gpa);
    double get_gpa() const;

    void add_id(int id);
    unsigned int get_id() const;

    const std::string& get_name() const;

    void print_info() const;
    static bool is_gpa_greater_than(const Student& student_1, const Student& student_2);

  private:
    std::string m_name;
    double m_gpa;
    unsigned int m_id;
};

