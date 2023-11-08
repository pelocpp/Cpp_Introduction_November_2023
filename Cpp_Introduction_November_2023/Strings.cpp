#include <iostream>
#include <string>
#include <cctype>

void additionalTestString()
{
    // Zeichenkette nach int umwandeln
    // "12345"

    std::string s ("12345");
    int value = std::stoi(s);

    // ============================
    // Ist ein Zeichen eine Ziffer (Zahl) oder nicht 

    char ch('5');

    bool b = std::isdigit(ch);
}

void testString()
{
    // standard class 'std::string'

    // constructor
    std::string s("12345");

    // operator <<
    std::cout << s << std::endl;

    // getter: size
    size_t len = s.size();
    std::cout << "Length: " << len << std::endl;

    // getter: empty
    bool b = s.empty();
    std::cout << "Empty: " << std::boolalpha << b << std::endl;

    // method: insert
    // insert "ABC" at position 2

    s.insert(2, "ABC");

    std::cout << "s.insert(2, \"ABC\") ==> " << s << std::endl;

    s.replace(2, 3, "abc");

    std::cout << "s.replace(2, \"ABC\")==> " << s << std::endl;

    // method: append
    // append "!!!"
    s.append("!!!");
    std::cout << "s.append(\"!!!\")    ==> " << s << std::endl;

    // comparison operators
    std::string s1("12345");
    std::string s2("12345");
    std::string s3("123456");

    bool b1 = (s1 == s2);
    bool b2 = (s1 == s3);

    std::cout << "s1 == s2           ==> " << std::boolalpha << b1 << std::endl;
    std::cout << "s1 == s3           ==> " << std::boolalpha << b2 << std::endl;

    // method: substr
    // retrieve a sub string
    // first param = position of the first character to include
    // second param = length of the substring
    std::string sub = s1.substr(1, 3);
    std::cout << "s1.substr(1, 3)    ==> " << std::boolalpha << sub << std::endl;

    // index operator []
    s[2] = '?';
    std::cout << "s[8] = '?'         ==> " << s << std::endl;

    // method: append
    // append another std::string object
    std::string result;
    result = s1.append(s2);
    std::cout << "s1.append(s2)      ==> " << result << std::endl;

    // operator +
    // concatenating two strings (same as using method append)
    result = s1 + s3;   // infix
    std::cout << "s1 + s3            ==> " << result << std::endl;

    // just kidding you:
    // using an operator with 'method call' syntax
    result = operator+ (s1, s2);
    std::cout << "s1 + s2            ==> " << result << std::endl;
}
