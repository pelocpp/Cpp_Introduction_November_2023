#include <iostream>
#include <string>
#include <cctype>

#include "DynamicArray.h"

// DynArray global (5);

void dynamicDataExampleMotivation()
{
    // C++ Array: FESTE LÄNGE !!!!!!!!!!!!!!!!!!
    int numbers[10];

    // numbers.resize();  // Geht nicht -- Logo: FESTE LÄNGE

    int n = 20;  

    std::cin >> n;  // 100 200

    int anotherNumbers[20];
}

void dynamicDataExample01()
{
    try
    {
        int n = 5;
        // n könnte von der Konsole eingelesen werden
        DynArray a(n);

        a.print();

        //a.at(0, 1);
        //a.at(1, 2);
        //a.at(2, 3);

        a.at(0) = 1;
        a.at(1) = 2;
        a.at(2) = 3;
        a.at(3) = 4;
        a.at(4) = 5;
        // a.at(5) = 6;

        a[0] = 1;
        a[1] = 2;
        a[2] = 3;
        a[3] = 4;
        a[4] = 5;
        // a[5] = 6;

        a.print();
    }
    catch (std::exception ex) {
        std::cout << ex.what() << std::endl;
    }
}


void dynamicDataExample02()
{
    DynArray a(3);

    a.print();

    a[0] = 1;
    a[1] = 2;
    a[2] = 3;

    a.print();

    a.resize(6);
    a.print();
}

void dynamicDataExample03()
{
    DynArray a(6);

    a.print();

    a[0] = 1;
    a[1] = 2;
    a[2] = 3;
    a[3] = 4;
    a[4] = 5;
    a[5] = 6;

    a.print();

    a.resize(3);
    a.print();
}

void dynamicDataExample04()
{
    DynArray a(5);   // local object
}

void dynamicDataExample05()
{
    DynArray* pda = new DynArray(5);

    delete pda;
}

void dynamicDataExample ()
{
    dynamicDataExample05();
}
