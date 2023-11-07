#include "Math.h"


// PI ist eine globale VARIABLE
const double PI = 3.14159265358979323846;

// Ziel: globale VARIABLE in KLASSEN ablegen


//class Math
//{
//private:
//    double m_pi;
//
//public:
//    Math()
//    {
//        m_pi = 3.14159265358979323846;
//    }
//
//    double Pi() { return m_pi; }
//};

// Header Datei
 //class Math
 //{
 //public:
 //    static const double Pi;
 //};

 // ======

 double const Math::Pi = 3.14159265358979323846;  // vorbelegt werden // .cpp !!!!!

void testStatic()
{
   // Math math;

    // PI = 100.0;

   // double radius = math.Pi() * 2.0 * 2.0;

    double radius = Math::Pi * 2.0 * 2.0;
}