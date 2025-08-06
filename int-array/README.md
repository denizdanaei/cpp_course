# IntArray Class

Covers: Dynamic memory, constructors, destructor, deep copy, operator overloading, const methods

## Goal

Design a class IntArray that wraps a dynamic array of integers, like a safer version of int*.

### Class Requirements

- Constructor: takes a size and allocates memory
- Destructor: frees memory
- Copy constructor + assignment operator (deep copy)
- `int& operator[](int index)` for `get` and `set`
- `void print() const`
- `int size() const`

### Example Usage

```
IntArray arr(5);
arr[0] = 10;
arr[1] = 20;

IntArray copy = arr;
copy[1] = 99;

arr.print();   // 10 20 0 0 0
copy.print();  // 10 99 0 0 0
```

This shows that modifying one does not affect the other.

