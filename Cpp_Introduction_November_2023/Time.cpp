// Implementation of methods of class Time

//#include <iostream>
//#include <iomanip>    // io manipulation

#include "Time.h"       // user file:  " "

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

