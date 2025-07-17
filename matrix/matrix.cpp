#include "matrix.hpp"
#include <iostream>
#include <string>
#include <vector>

Matrix::Matrix(unsigned int rows, unsigned int cols) : rows(rows), cols(cols) {
    // Initialize the matrix with the given number of rows and columns
    data = std::vector<std::vector<int>>(rows, std::vector<int>(cols, 0)); // Fill with zeros
}
Matrix::~Matrix() {
    
}

void Matrix::set_value(unsigned int rows, unsigned int cols, int value) {
    if (rows < this->rows && cols < this->cols) {
        data[rows][cols] = value; // Set the value at the specified position
    } else {
        // Handle out of bounds access, could throw an exception or log an error
        std::cout << "Error: Index out of bounds." << std::endl;
    }
}
int Matrix::get_value(unsigned int rows, unsigned int cols) const {
    if (rows < this->rows && cols < this->cols) {
        return data[rows][cols]; // Return the value at the specified position
    }
    return 0.0; // Return 0 if out of bounds
}

Matrix Matrix::operator+(const Matrix& other) const {
    
    if (this->rows != other.rows || this->cols != other.cols) {
        throw std::runtime_error("Error: Index out of bounds.");
    }
    Matrix result(this->rows, this->cols);
    for (unsigned int i = 0; i < this->rows; ++i) {
        for (unsigned int j = 0; j < this->cols; ++j) {
            result.set_value(i, j, this->get_value(i, j) + other.get_value(i, j));
        }
    }
    return result;
}

Matrix Matrix::operator*(int factor) const {
    Matrix result(this->rows, this->cols);
    for (unsigned int i = 0; i < this->rows; ++i) {
        for (unsigned int j = 0; j < this->cols; ++j) {
            result.set_value(i, j, this->get_value(i, j) * factor);
        }
    }
    return result;
}
Matrix operator*(int factor, const Matrix& other) {
    return other * factor; // Use the member function for scalar multiplication
}

void Matrix::print(std::string const name)const{

    std::string print_str = "Matrix " + name + " is:\n";
    for (unsigned int i = 0; i < this->rows; ++i) {
        for (unsigned int j = 0; j < this->cols; ++j) {
            print_str += std::to_string(this->get_value(i, j)) + " ";
        }
        print_str += "\n";
    }
    std::cout << print_str << std::endl;
}