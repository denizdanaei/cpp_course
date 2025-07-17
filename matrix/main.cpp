// test matrix class
#include "matrix.hpp"
#include <iostream>

int main()
{


    Matrix a(2, 2);
    Matrix b(2, 3);
    for(int i = 0; i < 2; ++i) {
        for(int j = 0; j < 2; ++j) {
            a.set_value(i, j, i + j);
            b.set_value(i, j, i * j);
        }
    }
    
    a.print("a");
    b.print("b");
    try {
        Matrix e = a + b; // This will throw an error due to different dimensions
        e.print("e"); // This line will not be executed if an exception is thrown
    } catch (const std::runtime_error& e) {
        std::cout << e.what() << std::endl;
    }
    // Matrix c = a + b; // Matrix addition
    // c.print("c"); // Print the result of addition
    Matrix d = a * 2.0; // Matrix scalar multiplication
    d.print("d"); // Print the result of scalar multiplication
    return 0;
}

