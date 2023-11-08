#include <iostream>
#include <string>
#include <cctype>

void workWithDynamicData(int* ptr)
{
    std::cout << "Dyn. Data: " << *ptr << std::endl;

    int tmp = *ptr;

    tmp++;

    *ptr = tmp;

    std::cout << "Dyn. Data: " << *ptr << std::endl;

    // delete ptr;  // delete BE CAREFULLLLLLLLLLLLLLLLL
}


// ==================================================

// C stilistisch
// C: malloc // free
// C++: new / delete

void testDynamic01()
{
    // our first dynamic variable

    int* ip = nullptr;

    ip = new int(123);   // scalar new
    std::cout << "Dyn. Data: " << *ip << std::endl;

    *ip = 456;
    std::cout << "Dyn. Data: " << *ip << std::endl;

    workWithDynamicData(ip);

    delete ip;   

    // std::cout << "Dyn. Data: " << *ip << std::endl;
}


void testDynamic02()
{
    int* ip = nullptr;

    // ip = new int(123);  // ONE int variable
    ip = new int[10];      // 10 int variables - like an array

    // ip holds the first address of the memory location

    // want to initialize all int variables with 1
    for (int i = 0; i < 10; ++i) {
        ip[i] = 1;
    }

    // FOR REAL PROGRAMMER :-)
    // Okay, let's do it withouy Array Syntax
    // 3 Lines of Code: Nur der Spielerei halber
    // For Understanding ....................
    for (int i = 0; i < 10; ++i) {

        *(ip + 3) = 1;
        // IDENTICALLY WITH
        ip[i] = 1;
    }

    // NICHT ZU VERGESSEN:
    // delete ip;    // WRONG // scalar delete
    delete[] ip;  // CORRECT // array delete

}


void testDynamic()
{
    testDynamic01();
}
