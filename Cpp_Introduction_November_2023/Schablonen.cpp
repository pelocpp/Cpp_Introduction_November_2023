#include <iostream>
#include <string>

//class Calculator
//{
//public:
//    static int add(int x, int y) { return x + y; }
//    static int sub(int x, int y) { return x - y; }
//    static int mul(int x, int y) { return x * y; }
//    static int div(int x, int y) { return x / y; }
//};
//
//class DoubleCalculator
//{
//public:
//    static double add(double x, double y) { return x + y; }
//    static double sub(double x, double y) { return x - y; }
//    static double mul(double x, double y) { return x * y; }
//    static double div(double x, double y) { return x / y; }
//};


// Vorlage für Taschenrechner


template <typename T>
class Calculator
{
public:
    static T add(T x, T y) {
        return x + y;
    }

    static T sub(T x, T y) { return x - y; }
    static T mul(T x, T y) { return x * y; }
    static T div(T x, T y) { 
        return x / y;
    }
};

// template specialization for T = int
template <>
class Calculator<int>
{
public:
    static int add(int x, int y) {
        return x + y;
    }

    static int sub(int x, int y) { return x - y; }
    static int mul(int x, int y) { return x * y; }

    static int div(int x, int y) {
        
        return  (int)(((double)x / y) + 0.5);   // should be rounding :)
    }
};



// int, double, float, long, ...........

void testTemplates()
{
   // Calculator calc;

    int result = Calculator<int>::div(1, 4);  // 0.75 // abschneiden oder runden

    double n, m, dresult;

    n = 1.7;
    m = 2.7;

    dresult = Calculator<double>::add(n, m);
}