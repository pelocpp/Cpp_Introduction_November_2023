#include "AwesomeRectangle.h"
#include "BeautifulRectangle.h"


using namespace BeautifulRectangle;

void testNamespaces01()
{
    // a) using namespace specification
    using namespace AwesomeRectangle;

    // Rectangle rect;
    AwesomeRectangle::Rectangle rect;
}

void testNamespaces02()
{
    // b) using "long identifier"

    AwesomeRectangle::Rectangle rect;
}

void testNamespaces03()
{
    // c) NIEMALS !!!!!!!!!!!!!!!!!!!!!!

    Rectangle rect;
}

void testNamespaces04()
{
    // it's possible two use two classes of the same name
    // according to different namespace

    BeautifulRectangle::Rectangle rect1;
    
    AwesomeRectangle::Rectangle rect2;
}
