#pragma once

// Dynamic Array
// Header


class DynArray
{
private:
    int m_size;
    int* m_data;

public:
    // c'tors
    DynArray();
    DynArray(int size);

    // destructor
    ~DynArray();


    // getter
    int size();

    // Zugriff - als Methode oder als Operator

    // public interface
    // 1. Variante: Hmmm, beginners style
    // void at(int index, int wert);

    // 2. Variante: Hmmm, advanced style
    int& at(int index);

    // operators
    int& operator[] (int index);


    void print();
    void resize(int newSize);


};