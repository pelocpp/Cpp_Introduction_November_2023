// Implementation of methods of class Time

//#include <iostream>
//#include <iomanip>    // io manipulation

#include "Time.h"       // user file:  " "


// =======================================================


// constructors

Time::Time()
{
    m_hours = 0;
    m_minutes = 0;
    m_seconds = 0;
}

Time::Time(int hours, int minutes, int seconds)
{
    // 1. Versuch / 1. try
    //m_hours = hours;
    //m_minutes = minutes;
    //m_seconds = seconds;

    // 2. Versuch / 2. try
    setHours(hours);
    setMinutes(minutes);
    setSeconds(seconds);
}

//Time::Time(int hours, int minutes)
//{
//    setHours(hours);
//    setMinutes(minutes);
//    
//    m_seconds = 0; 
//}



// =======================================================


void Time::setStunden(int stunden, int any)
{
    this -> stunden = stunden;

    any = 123;

    
}

// setter
void Time::setHours(int hours)
{
    if (0 <= hours && hours < 24) {
        m_hours = hours;
    }
    else {
        // we don't modify the current value of 'm_hours'
        std::cout << "Wrong value for hours: " << hours << std::endl;
        m_hours = 0;
    }
}

void Time::setMinutes(int minutes)
{
    if (0 <= minutes && minutes < 60) {
        m_minutes = minutes;
    }
    else {
        // we don't modify the current value of 'm_minutes'
        std::cout << "Wrong value for minutes: " << minutes << std::endl;
        m_minutes = 0;
    }
}

void Time::setSeconds(int seconds)
{
    if (0 <= seconds && seconds < 60) {
        m_seconds = seconds;
    }
    else {
        // we don't modify the current value of 'm_seconds'
        std::cout << "Wrong value for seconds: " << seconds << std::endl;
        m_seconds = 0;
    }
}


void Time::reset()
{
    m_hours = 0;
    m_minutes = 0;
    m_seconds = 0;
}

void Time::increment()
{
    // very, very simple -- and mostly wrong
    // left as exercise :)
    m_seconds++;
}

void Time::print()
{
    // C-Style

    // C++ - -Style
    //std::cout << std::setw(2) << std::setfill('0') << m_hours << ":";
    //std::cout << std::setw(2) << std::setfill('0') << m_minutes << ":";
    //std::cout << std::setw(2) << std::setfill('0') << m_seconds;
    //std::cout << std::endl;

    // or - C-Style
    std::printf("%02d:%02d:%02d\n", m_hours, m_minutes, m_seconds);
}

