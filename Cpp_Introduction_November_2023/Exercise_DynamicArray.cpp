// ===========================================================================
// DynamicArray.cpp
// ===========================================================================

// https://medium.com/@jcapona/dynamic-array-implementation-cpp-9deadaf1ba8e

// https://codereview.stackexchange.com/questions/234556/dynamic-array-implementation-in-c

#include <stdexcept>

#include "Exercise_DynamicArray.h"

// c'tor
DynamicArray::DynamicArray()
{
    m_size = 0;
    m_data = nullptr;
}

DynamicArray::DynamicArray(int size)
{
    m_size = size;
    m_data = new int[size];
}

DynamicArray::~DynamicArray()
{
    delete[] m_data;
}

// getter / setter
int DynamicArray::size() const
{
    return m_size;
}

// operators
int& DynamicArray::operator[] (int index)
{
    if (index >= m_size) {
        throw std::out_of_range("Array index out of bounds");
    }

    return m_data[index];
}

bool operator== (const DynamicArray& left, DynamicArray right)
{
    if (left.m_size != right.m_size) {
        return false;
    }

    for (int i = 0; i < left.m_size; ++i) {

        if (left.m_data[i] != right.m_data[i]) {
            return false;
        }
    }

    return true;
}

bool operator!= (const DynamicArray& left, DynamicArray right)
{
    return ! (left == right);
}




// ===========================================================================
// End-of-File
// ===========================================================================
