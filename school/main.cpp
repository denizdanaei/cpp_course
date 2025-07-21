
// create a student profile
#include "course.hpp"
#include "school.hpp"
#include "student.hpp"

int main() {
    School school("Alten Academy");
    Student* s1 = school.add_student("Koos");
    Student* s2 = school.add_student("Piet");
    Student* s3 = school.add_student("Fatima");

    Course* c1 = school.add_course("Modern C++");
    Course* c2 = school.add_course("OO Design");
    Course* c3 = school.add_course("Scrum");

    c1->add_student(s1);
    c1->add_student(s2);

    c2->add_student(s2);
    c2->add_student(s3);

    c3->add_student(s1);
    c3->add_student(s3);

    school.print_students("Modern C++");
    school.print_students("OO Design");
    school.print_students("Scrum");

    {
        auto school2 = school;  // Copying the school object
        school2.print_students("Scrum");
    }
    return 0;
}
