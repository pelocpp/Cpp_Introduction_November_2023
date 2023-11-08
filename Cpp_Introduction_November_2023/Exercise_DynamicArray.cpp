// ===========================================================================
// DynamicArray.cpp
// ===========================================================================

#include <stdexcept>

#include "Exercise_DynamicArray.h"

// c'tor
DynamicArray::DynamicArray()
{
    m_size = 0;
    m_data = nullptr;
}

DynamicArray::DynamicArray(size_t size)
{
    m_size = size;
    m_data = new int[size];

    // initialize buffer with default values
    for (int i = 0; i < m_size; ++i) {
        m_data[i] = 0;
    }
}

DynamicArray::~DynamicArray()
{
    delete[] m_data;
}

// getter / setter
size_t DynamicArray::size() const
{
    return m_size;
}

// public interface
void DynamicArray::print()
{
    for (size_t i = 0; i < m_size; ++i) {
        std::cout << m_data[i] << ' ';
    }
    std::cout << std::endl;
}

void DynamicArray::resize(size_t newSize)
{
    // allocate new buffer
    int* data = new int[newSize];

    size_t minSize = (newSize <= m_size) ? newSize : m_size;

    // copy old buffer into new one
    for (size_t i = 0; i < minSize; ++i) {
        data[i] = m_data[i];
    }

    // initialize rest of buffer, if any, with default values
    for (size_t i = m_size; i < newSize; ++i) {
        data[i] = 0;
    }

    // release old buffer
    delete[] m_data;

    // switch to new buffer
    m_size = newSize;
    m_data = data;
}

// operators
int& DynamicArray::operator[] (size_t index)
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
