// ===========================================================================
// Exercise_DynamicArray.h
// ===========================================================================

#pragma once

#include <iostream>

class DynamicArray
{
private:
    size_t m_size;
    int* m_data;

public:
    // c'tor(s) / d'tor
    DynamicArray();
    DynamicArray(size_t size);
    ~DynamicArray();

    // getter / setter
    size_t size() const;

    // public interface
    void print();
    void resize(size_t newSize);

    int& at (size_t index);
    const int& at (size_t index) const;

    // operators
    int& operator[] (size_t index);
    const int& operator[] (size_t index) const;

    // operators
    friend bool operator== (const DynamicArray& left, DynamicArray right);
    friend bool operator!= (const DynamicArray& left, DynamicArray right);
};

// ===========================================================================
// End-of-File
// ===========================================================================
