// matrix class
#pragma once

#include <string>
#include <vector>
class Matrix
{
    public:
        Matrix(unsigned int rows, unsigned int cols);
        ~Matrix();
        void set_value(unsigned int rows, unsigned int cols, int value);
        int get_value(unsigned int rows, unsigned int cols) const;
        Matrix(const Matrix&) = default; // Copy constructor
        Matrix operator+(const Matrix& other) const;
        
        Matrix operator*(int factor) const;

        void print(std::string const)const;
    private:
        int rows;
        int cols;
        std::vector<std::vector<int>> data; // 2D vector to hold matrix data 
};

Matrix operator*(int factor, const Matrix& other);