#include "int-array.hpp"
#include <iostream>
#include <string>


IntArray::IntArray(int size) : m_size(size) {

    m_array.resize(m_size);
    for (auto& element: m_array) {
        element = std::make_unique<int>(0);
    }
}
IntArray::IntArray(const IntArray& other) {}
IntArray::~IntArray() {}
void IntArray::print() {

    std::cout << "Array elements of size "  << m_array.size() <<"\n" << std::endl;
    std::string m_str= "[ ";
    for (auto& element: m_array) {
        m_str += std::to_string(*element);
        m_str += " ";
    }
    m_str += "]";
    std::cout << m_str << std::endl;

}
