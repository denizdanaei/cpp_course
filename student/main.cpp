
// create a student profile
#include "student.hpp"
#include <iostream>


int main()
{

    Student jane_doe("Jane Doe");
    jane_doe.add_grade(9.5);
    jane_doe.add_grade(90.5);
    std::cout << "The student info is: " << jane_doe.get_name() << "  The average grade is: " << jane_doe.get_average() << std::endl;
    std::cout << "The number of students are: " << Student::get_instance_count() << std::endl;
 
    Student john_doe("John Doe");
    john_doe.add_grade(0.5);
    john_doe.add_grade(90.5);
    std::cout << "The student info is: " << john_doe.get_name() << "  The average grade is: " << john_doe.get_average() << std::endl;
    std::cout << "The number of students are: " << Student::get_instance_count() << std::endl;
 
    auto s = john_doe;
    if (Student::is_average_grater_than(jane_doe, john_doe)) {
        std::cout << jane_doe.get_name() << " has a higher average than " << john_doe.get_name() << std::endl;
    } else if (Student::is_average_grater_than(john_doe, jane_doe)) {
        std::cout << john_doe.get_name() << " has a higher average than " << jane_doe.get_name() << std::endl;
    } else {
        std::cout << "Both students have the same average." << std::endl;
    }
   
    return 0;
}

