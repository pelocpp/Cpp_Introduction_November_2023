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
    int getSeconds() { return m_seconds; }
    int getMinutes() { return m_minutes; }
    int getHours() { return m_hours; }
    void setSeconds(int seconds);
    void setMinutes(int minutes);
    void setHours(int hours);

    void setStunden(int stunden, int any);   // method: paramater: stunden  // conflict

    // compare 2 Time Objects (equal, not equal)
    // Motivation 2: passing parameters

    bool compare(Time t1, Time t2);

    bool compare(Time& t1, Time& t2);


    // methods:  Schnittstellen der Methoden
    // Name der Methode, Parameter, Rückgabetyp
public:
    void reset();
    void increment();
    void print();

};
