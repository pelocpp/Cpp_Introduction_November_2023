#include <iostream>   // system file: < >

#include "Time.h"     // system file: < >


void testTime()
{
    // ein erstes Objekt
    Time pause;

    // Zugriff auf das Objekt:  Punkt-Operator '.'
    pause.m_hours = 10;
    pause.m_minutes = 30;
    pause.m_seconds = 0;

    pause.print();

    // a second objekt
    Time thisEvening;

    // Zugriff auf das Objekt:  Punkt-Operator '.'
    thisEvening.m_hours = 17;
    thisEvening.m_minutes = 0;
    thisEvening.m_seconds = 0;

    thisEvening.print();
}

int main()
{
    testTime();

    // console output
    // << operator    // <===
    std::cout << "Hallo Seminar";

    return 123;
}