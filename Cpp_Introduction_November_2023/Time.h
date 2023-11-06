// HEADER File

#pragma once

#include <iostream>   // std::cout
#include <iomanip>    // io manipulation (std::setw)
#include <cstdio>     // std::printf

class Time
{
public:
    // member data     // instance variables
    // Konvention: m_  // member data
    int m_seconds;
    int m_minutes;
    int m_hours;

    // methods:  Schnittstellen der Methoden
    // Name der Methode, Parameter, Rückgabetyp
    void reset();
    void increment();
    void print();
};
