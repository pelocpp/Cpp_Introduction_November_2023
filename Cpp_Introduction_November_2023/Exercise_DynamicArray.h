// ===========================================================================
// Exercise_DynamicArray.h
// ===========================================================================

#pragma once

#include <iostream>

class DynamicArray
{
private:
    int m_size;
    int* m_data;

public:
    // c'tor(s) / d'tor
    DynamicArray();
    DynamicArray(int size);
    ~DynamicArray();

    // getter / setter
    int size() const;

    // public interface
    void print();

    int& at (int index);
    const int& at (int index) const;

    // operators
    int& operator[] (int index);
    const int& operator[] (int index) const;

    // operators
    friend bool operator== (const DynamicArray& left, DynamicArray right);
    friend bool operator!= (const DynamicArray& left, DynamicArray right);
};

// ===========================================================================
// End-of-File
// ===========================================================================
