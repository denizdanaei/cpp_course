
// create a student profile
#include "student.hpp"
#include "student_manager.hpp"
// #include <iostream>

int main() {
    StudentManager lely;

    lely.add_student("Jane Doe", 3.5, 1001);
    lely.add_student("Deniz Danaei", 3, 1003);

    lely.print_all();
    lely.get_topper();

    return 0;
}
