// IntArray header file
#pragma once
#include <memory>
#include <vector>


class IntArray {
  public:
    explicit IntArray(int size);  // Constructor
    IntArray(const IntArray& other);
    ~IntArray();
    void print();
    void operator[](const int index);


  private:
    std::vector<std::unique_ptr<int>> m_array;
    int m_size;

};