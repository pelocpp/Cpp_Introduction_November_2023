// Dynamic Array
// Implementation


#include <iostream>

#include "DynamicArray.h"

DynArray::DynArray()
{
    m_size = 0;
    m_data = nullptr;
}

DynArray::DynArray(int size)
{
    m_size = size;
    m_data = new int[size];  // array new

    // vorbelegen
    for (int i = 0; i < size; ++i) {
        m_data[i] = 0;
    }
}

DynArray::~DynArray()
{
    delete[] m_data;       // array delete
}

//void DynArray::at(int index, int wert)
//{
//    m_data[index] = wert;
//}

int& DynArray::at(int index)
{
    if (index >= m_size) {

        throw std::out_of_range("Falscher Index");
    }

    return m_data[index];
}

// operators
int& DynArray::operator[] (int index)
{
    // no bounds checking - intentionally !!!
    return m_data[index];
}

void DynArray::print()
{
    for (int i = 0; i < m_size; ++i) {
        std::cout << m_data[i] << ' ';
    }
    std::cout << std::endl;
}

void DynArray::resize(int newSize)
{
    // allocate new buffer
    int* tmp = new int[newSize];

    // berechne das Minimum der beiden Pufferlängen
    // compute minimum of current buffer size
    // and new requested buffer size
    int minSize;

    if (m_size <= newSize) {
        minSize = m_size;
    }
    else {
        minSize = newSize;
    }

    // copy old buffer into new one
    for (int i = 0; i < minSize; ++i) {
        tmp[i] = m_data[i];
    }

    for (int i = m_size; i < newSize; ++i) {
        tmp[i] = 0;
    }

    // delete current (better: old) buffer
    delete[] m_data;

    // let m_data point to newly allocated buffer
    m_data = tmp;

    // actualize m_size
    m_size = newSize;
}