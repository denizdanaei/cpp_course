// Student class containing a name and grade
#include "student.hpp"
#include <iostream>

Student::Student(const std::string& name) : name(name){
    // Constructor initializes the student's name
    instance_count++; 
}
Student::Student(const Student& other) : name(other.name) {
    // Copy constructor to handle copying of Student objects
    instance_count++;
}
Student::~Student() {
    instance_count--;
    std::cout << "Remaining number of students are: " << this->get_instance_count() << std::endl;
}
void Student::add_grade(double grade) {
    grades.push_back(grade);
}
const std::string& Student::get_name() const {
    return name;
}

double Student::get_average() const {
    if (grades.empty()) return 0.0; // Return 0 if no grades are present
    double sum = 0.0;
    for (double grade : grades) {
        sum += grade;
    }
    return sum / grades.size();
}

bool Student::is_average_grater_than(const Student& student_1, const Student& student_2) {
    return student_1.get_average() > student_2.get_average();
}


int Student::get_instance_count() {
    return instance_count;
}
int Student::instance_count = 0; // Initialize static member variable