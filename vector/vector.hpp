// example vector class
// since vector is using template class, we dont have a cpp file, everything goes to the header.
#pragma once

#include <cstddef>
#include <cstdlib>
template <typename T>
class Vector {
  public:
    Vector(size_t size) : msize(size) {
        mdata = new T[msize];
    };
    ~Vector() {
        delete mdata;
    };

    void push_back(T data) {
        mdata[current_position] = data;
        current_position++;
    };

  private:
    T* mdata;
    size_t msize;
    unsigned int current_position = 0;
};