// HEADER File

#pragma once

#include <iostream>   // std::cout
#include <iomanip>    // io manipulation (std::setw)
#include <cstdio>     // std::printf

class Time
{
private:
    // member data     // instance variables
    // Konvention: m_  // member data
    int m_seconds;
    int m_minutes;
    int m_hours;

    int stunden;   // member data

public:
    // constructor
    // 2 Besonderheiten:
    // a) Name: Name der Klasse !!!!
    // b) Return Type: KEINER

    // constructors can be overloaded (several constructors == same method name !!!)

    Time();
    Time(int hours, int minutes, int seconds = 1) ;
    //   Time(int hours, int minutes);   // seconds should be 0

    // getter // setter
    int getSeconds() const { return m_seconds; }
    int getMinutes() const { return m_minutes; }
    int getHours() const { return m_hours; }

    void setSeconds(int seconds);
    void setMinutes(int minutes);
    void setHours(int hours);

    void setStunden(int stunden, int any);   // method: paramater: stunden  // conflict

    // methods:  Schnittstellen der Methoden
    // Name der Methode, Parameter, Rückgabetyp
public:
    void reset();
    void increment();
    void print();


    // preperation / Vorbereitung:
    bool equals(const Time& other);

    // operators
    bool operator != (const Time& other);

    // friend bool operator == (const Time& left, const Time& right);
};

// ====================================================

// declaring global 'functions' / operators

bool operator == (const Time& left, const Time& right);
