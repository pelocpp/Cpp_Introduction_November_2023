#include <iostream>
#include <string>


// ACHTUNG:
// Aus Zeitgründen und der Einfachheit halber:
// Klasse in einem .cpp File
// Realisierung der Methoden in der Klasse


// Eine Schnittstelle // ein Vertrag für graphische Rechtecke:

class IRectangle
{
public:
    virtual void drawBorder() = 0;
    virtual void eraseBackground() = 0;
    virtual void draw() = 0;
};

// Vertrag zu IRectangle wird TEILWEISE erfüllt
// ==>  Rectangle ist abstract // Helfer-Klasse
class Rectangle : public IRectangle
{
private:
    int m_x;   // linke, oberere Ecke // upper-left corner
    int m_y;
    int m_width;
    int m_height;

public:
    // c'tor(s)
    Rectangle() : Rectangle(0, 0, 0, 0) {}

    Rectangle(int x, int y, int width, int height)
        : m_x(x), m_y(y), m_width(width), m_height(height)
    {}

    // getter
    int getX() { return m_x; }

    void setX(int x) { 
        // check validity of value of x
        m_x = x;
    }

    int getY() { return m_y; }
    int getWidth() { return m_width; }
    int getHeight() { return m_height; }

    // public interface
    void drawBorder()
    {
        std::cout
            << "  Rectangle::drawBorder: width=" << m_width
            << ", height: " << m_height << std::endl;
    }

    void eraseBackground()
    {
        std::cout << "  Rectangle::eraseBackground" << std::endl;
    }

    // Rule // Contract // NO IMPLEMENTATION
    // virtual void draw() {}


    //virtual void draw() {

    //    eraseBackground();
    //    drawBorder();

    //    std::cout
    //        << "Rectangle::draw [x=" << getX()
    //        << ", y=" << getY() << "]" << std::endl;

    //}
};

// a) erbe Funktionalität
// b) Hmmm, ich bekomme Aufgaben / Arbeit

class ColoredRectangle : public Rectangle
{
private:
    int m_color;   // rgb // hsv 

public:
    // c'tors
    ColoredRectangle()
        : Rectangle(1, 1, 1, 1)
    {
        m_color = 0;
        // intellisense
        // this->setX(123);

        // m_x = 12345; // whatever
    }

    ColoredRectangle( int x, int y, int width, int height)
        : Rectangle(x, y, width, height)
    {
        m_color = 0;
    }

    ColoredRectangle(int x, int y, int width, int height, int color)
        : Rectangle(x, y, width, height)
    {
        m_color = color;
    }


    int getColor() {

        return m_color;
    }

     void draw() {

         std::cout << "!!! ColoredRectangle ! " << std::endl;

         // Die Funktionalität der Vaterklasse nicht verlieren !!!
         // und auch nicht DOPPELT implementieren.
         
         //eraseBackground();
         //drawBorder();

         // RE-USE Functionality of the Base Class !!!!!!!!!!!!!
         // Rectangle::draw();
         // Aufruf der Vaterklasse: 99% Usage

        //std::cout
        // << "!!!! ColoredRectangle::draw [x=" << getX()
        // << ", y=" << getY() << "]" << std::endl;

        std::cout << "!!!! male Farbe " << m_color << std::endl;
     }

};

class ImprovedColoredRectangle : public ColoredRectangle {

public:
    ImprovedColoredRectangle (int x, int y, int width, int height, int color)
        : ColoredRectangle(x, y, width, height, color)
    {}
};



class TransparentRectangle : public Rectangle
{
private:
    int m_opaque;  // transparency value  // 

public:
    // c'tor(s)
    TransparentRectangle()
        : TransparentRectangle(0, 0, 0, 0, 0)
    {}

    TransparentRectangle(int x, int y, int width, int height, double color)
        : Rectangle(x, y, width, height), m_opaque(123)
    {}

    // public interface
    void draw()
    {
        //eraseBackground();
        //drawBorder();

        std::cout
            << "### TransparentRectangle::draw [x="
            << getX() << ", y=" << getY() << "]" << std::endl;
    }
};


void testInheritance01()
{
    //Rectangle r(1, 1, 10, 20);
    //r.draw();

    ColoredRectangle cr(2, 2, 30, 40);
    cr.draw();

    cr.drawBorder();
}


void testInheritance02()
{
    // Objekte über eine Referenz / einen Zeiger ansprechen

    Rectangle* rp;

    ColoredRectangle cr(2, 2, 30, 40, 999);

    // Links:  Adresse Rectangle
    // Rechts: Adresse ColoredRectangle
    // Ein ColoredRectangle IST-EIN Rectangle
    rp = &cr;

    rp->draw();   // WELCHES DRAW wird aufgerufen ????????
                  // a) rp ist vom Typ Rectangle* 
                  // ==> Rectangle::draw   !!!
                  // b) Der Wert von rp ist eine Adresse eines ColoredRectangle Objekts
                  // ==> ColoredRectangle::draw
}

void testInheritance03()
{
    ColoredRectangle cr1(2, 2, 30, 40, 999);
    ColoredRectangle cr2(2, 2, 30, 40, 999);

    cr1.getColor(); // !!!

    TransparentRectangle tr1(2, 2, 30, 40, 999);
    TransparentRectangle tr2(2, 2, 30, 40, 999);
    TransparentRectangle tr3(2, 2, 30, 40, 999);

    // Container für graphische Objekte : Feld
    // Container von Schnittstellen Zeigern:
    // Container of interface Pointers:
    IRectangle* rects [5] { &cr1, & tr1, & cr2, &tr2, &tr3 };

    // DOWN CAST: DANGEROUS !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    // DON'T DO THAT
    int value =   ((ColoredRectangle*) rects[1]) ->getColor();


    for (int i = 0; i < 5; ++i) {

        rects[i]->draw();
    }
}

void testInheritance04()
{
   // Rectangle rect;
}


// ===================================================
// Was kann ich mit einer Schnittstelle anfangen



// Factory
IRectangle* getColoredRectangle(int color) {

    IRectangle* pcr = new ImprovedColoredRectangle(1, 2, 3, 4, color);

    return pcr;
}

void testInheritance05()
{
    IRectangle* cr = getColoredRectangle(999);

    cr->draw();
    cr->drawBorder();
}

void testInheritance()
{
   // testInheritance01();
    // testInheritance02();
    testInheritance03();
}