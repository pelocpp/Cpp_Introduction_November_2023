#include <iostream>
#include <cstdlib>

#include "Time.h"
#include "Exercise_Rectangle.h"


// timesTwo: call-by-value
void malZwei(int number)
{
    number = number * 2;
}

// timesTwo: call-by-reference
// NOTE: Only a single character ('&') must be added
void malZweiRef(int& number)
{
    number = number * 2;
}

void testMalZwei()
{
    int a = 123;

    std::cout << a << std::endl;

    malZwei(a);

    std::cout << a << std::endl;

    malZweiRef(a);

    std::cout << a << std::endl;

}

void referencesAndAddressOperator()
{
    int anInteger = 0;
    int& rSomeRef = anInteger;

    anInteger = 123;
    std::cout << "anInteger:  " << anInteger << std::endl;
    std::cout << "rSomeRef:   " << rSomeRef << std::endl;

    std::cout << "&anInteger: " << &anInteger << std::endl;
    std::cout << "&rSomeRef:  " << &rSomeRef << std::endl;

    int tmp = 0;

    tmp = anInteger;

    tmp = rSomeRef;
}






// ======================================

void testPointers()
{
    int n;
    
    n = 123;

        // direkte Wertzuweising
        // direct Assignment

    std::cout << "n:  " << n << std::endl;

    // Adresse einer Variablen

    int* ip;    // ip ist eine Variable, die eine Adresse aufnehmen kann:
                // ip ist ein Zeiger
                // ip is a variable containing an address:
                // ip is a pointer
    
    ip = &n;    // address-Of Operator

    std::cout << "&n: " << ip << std::endl;

    // Arbeiten mit einer Adress - Variablen
    // Working with an address variable

    *ip = 124;  // Wertzuweisung an n (124), OHNE den Namen n zu verwenden (wir kennen die Adresse)
                // assign 124 to n WITHOUT using the varible name of 'n' (we know the address of n)

                // indirekte Wertzuweising
                // indirect assignment


    std::cout << "n:  " << n << std::endl;
}

void testReferences ()
{
    int n;

    n = 123;

    std::cout << "n:  " << n << std::endl;

    // Referenz einer Variablen // Reference of a Variable

    int& ri = n;     // reference of int 

    n = 124;

    ri = 125;
}


void testPointersSizes()
{
    int a1 = sizeof(int);   // Sizeof ===> size in BYTES !!!!

    int a2 = sizeof(double);

    int a3 = sizeof(Time);

    int a4 = sizeof(Time[10]);
}

// Motivation 1
void testPointersWhy()
{
    // we need memory: 
    // a) new
    // b) malloc  // free

    // example: ONE Time Object

    // Den Typ der Adresse umwandeln:

    Time* t = (Time*) malloc(sizeof(Time));  // entspricht 16 Bytes
}


void testRefernces_vs_Pointers()
{

}