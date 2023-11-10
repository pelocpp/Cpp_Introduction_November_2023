#include <iostream>
#include <string>

#include <vector>
#include <algorithm>


// first steps

void testSTL01()
{
    // Feld von ganzen Zahlen beliebiger Länge
    std::vector<int> vec;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);

    // Geht nur für Vektoren ...
    for (int i = 0; i < vec.size(); ++i) {

        std::cout << i << ": " << vec[i] << std::endl;
    }
}

void testSTL02()
{
    // Feld von ganzen Zahlen beliebiger Länge
    std::vector<int> vec;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);

    // allgemeines STL Konzept
    std::vector<int>::iterator first = vec.begin();

    std::vector<int>::iterator ende = vec.end();

    // ersten Wert bestimmen / get first value
    int value = * first;
    std::cout << value << std::endl;

    // next element
    ++first;
    value = *first;
    std::cout << value << std::endl;

    // next element
    ++first;
    value = *first;
    std::cout << value << std::endl;

    // next element
    ++first;
    value = *first;   // Absturz
    std::cout << value << std::endl;
}

void testSTL03()
{
    // Feld von ganzen Zahlen beliebiger Länge
    std::vector<int> vec;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);

    // allgemeines STL Konzept
    std::vector<int>::iterator first = vec.begin();

    std::vector<int>::iterator ende = vec.end();


    // Einen Container durchlaufen / traversal of a container
    // for is allowed, if it's conformant with the iterator concept
    for (  ;  first != ende ; ++first) {

        int value = *first;
        std::cout << value << std::endl;
    }
}

// whatToDo: C-style function

void whatToDo(int value)
{
    std::cout << value << std::endl;
}

void testSTL04()
{
    // Feld von ganzen Zahlen beliebiger Länge
    std::vector<int> vec;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);

    std::for_each (
        vec.begin(),
        vec.end(),
        whatToDo
    );
}

void testSTL05()
{
    std::vector<int> vec;

    vec.reserve(80);

    for (int i = 0; i < 100; ++i) {

        vec.push_back(2 * i);

        std::cout 
            << i << ": " << vec[i] << ", size: " << vec.size() 
            << ", capacity: " << vec.capacity() << std::endl;
    }

    vec.shrink_to_fit();

    std::cout
        << "size: " << vec.size()
        << ", capacity: " << vec.capacity() << std::endl;
}

void testSTL06()
{
    std::vector<int> vec;

     vec.resize(100);

    // Vorbelegen
    // auf den Wert 1 vorbelegen
    for (int i = 0; i < 100; ++i) {
        vec[i] = 1;
    }

    // OR / Oder

    std::fill(
        vec.begin(),
        vec.end(),
        2
    );
}

// globale Variable i
// int i = -1;

int func() {

    static int i = -1;

    std::cout << "bin in func:" << std::endl;

    ++i;

    return 2 * i + 1;
}

void testSTL07()
{
    std::vector<int> vec;

    vec.resize(20);

    // initialize with computed values
    //for (int i = 0; i < 100; ++i) {
    //    vec[i] = 2 * i + 1;
    //}

    // or 

    std::generate(
        vec.begin(),
        vec.end(),
        func
    );
}

// callable class // callable objects
class InitializerForVector
{
private:
    int m_value;

public:
    InitializerForVector() {
        m_value = -1;
    }

    int nextValue() {

        ++m_value;
        return 2 * m_value + 1;
    }

    int operator () () {

        ++m_value;
        return 2 * m_value + 1;
    }
};

class OutputForVector
{
public:

    void operator () (int value) {
        std::cout << "In OutputForVector: " << value << std::endl;
    }
};

class GeneralPurposeVectorHandler
{
private:
    int m_value;

public:
    GeneralPurposeVectorHandler() {
        m_value = -1;
    }

    int nextValue() {

        ++m_value;
        return 2 * m_value + 1;
    }

    void operator () (int value) {
        std::cout << "In GeneralPurposeVectorHandler: " << value << std::endl;
    }

    int operator () (void) {

        ++m_value;
        return 2 * m_value + 1;
    }
};

void testSTL08()
{
    InitializerForVector initializer;

    int next = initializer.nextValue();
    next = initializer.nextValue();
    next = initializer.nextValue();

    next = initializer();
    next = initializer();
    next = initializer();
}


void testSTL09()
{
    std::vector<int> vec;

    vec.resize(5);

   // OutputForVector output;

    GeneralPurposeVectorHandler handler;

    std::for_each(
        vec.begin(),
        vec.end(),
        handler
    );

   // InitializerForVector initializer;

    std::generate(
        vec.begin(),
        vec.end(),
        handler
    );

    std::for_each(
        vec.begin(),
        vec.end(),
        handler
    );
}


//void whatToDo(int value)
//{
//    std::cout << value << std::endl;
//}


void testSTL10()
{
    std::vector<int> vec;

    vec.resize(5);

    // introducing lambdas
    // a more compact syntax
    std::for_each(
        vec.begin(),
        vec.end(),
        // inline function: Syntax: [] () {}
        [] (int value) { 
            std::cout << "Value: " << value << std::endl;
        }
    );

    // a more compact syntax
    std::generate(
        vec.begin(),
        vec.end(),
        // this is a lambda function WITH member data !!!
        // -1 is of type int ==> m_value has int as data type
        // default: a lambda function is a const function
        // there is always a solution for any problem: 
        // we can drop the const attribute: mutable
        [n = -1] () mutable {
            ++n;
            return 2 * n + 1; 
        }
    );
}

void testSTL()
{
    testSTL09();
}