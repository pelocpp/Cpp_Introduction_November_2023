#include <iostream>   // system file: < >
#include "Time.h"     // user file:   " "

#include "Math.h"

void testPointers();
void testReferences();
void testPointersSizes();
void testBankAccount();
void testStatic();
void testBankAccount2();
void testBankAccount3();
void testMalZwei();
void referencesAndAddressOperator();
void testOperators();
void testString();
void additionalTestString();
void testDateToWord();
void testDynamicArray();
void testDynamic();
void dynamicDataExample();

void helloWorld()
{
    // console output
    std::cout << "Hallo Seminar";
}

int testRectangle();

void testTime()
{
    // ein erstes Objekt
    Time pause;    // I need a constructor without parameters (0:0:0) - default constructor

    // to intitialize: NO // to construct: Konstruktor  // constructor
    Time anotherPause(99999, 0, 0);  // object creation AND intitialization

    Time thirdPause(13, 0);  // object creation AND intitialization

    pause.setStunden(11, 999);

    // Zugriff auf das Objekt:  Punkt-Operator '.'
    
    // pause.m_hours = 99999;   // error
    // but:
    pause.setHours(12);
    //pause.m_minutes = 0;
    //pause.m_seconds = 0;
    pause.setMinutes(0);
    pause.setSeconds(0);

    pause.print();

    // a second objekt
    Time thisEvening;

    // Zugriff auf das Objekt:  Punkt-Operator '.'
    //thisEvening.m_hours = 17;
    //thisEvening.m_minutes = 0;
    //thisEvening.m_seconds = 0;
    thisEvening.setHours(17);
    thisEvening.setMinutes(0);
    thisEvening.setSeconds(0);

    thisEvening.print();
}

void testOperators()
{
    Time t1(9, 0, 0);

    Time t2(12, 0, 0);

    if (t1.equals(t2)) {

        std::cout << "Gleichheit";
    }
    else {
        std::cout << "Ungleichheit";
    }

    if (t1 == t2) {

        std::cout << "Gleichheit";
    }
}

int main()
{
    std::cout << "Begin" << std::endl;

    //referencesAndAddressOperator();
    //testMalZwei();
    //testBankAccount3();
    //testStatic();
    //testBankAccount();
    //testReferences();
    //helloWorld();
    //testTime();
    //testRectangle();
    //testOperators();
    //testString();
    //additionalTestString();
    //testDynamicArray();
    // testDynamic();
    dynamicDataExample();
    
    //testDateToWord();

    std::cout << "End" << std::endl;

    return 1;
}
