#include <iostream>
#include "Complex.h"

int main()
{
    TComplex a; //êîíñòðóêòîð ïî óìîë÷àíèþ
    TComplex b = 1.25;
    TComplex c(2, 3);//êîíñòðóêòîð èíèöèàëèçàòîð
    TComplex d = c;//êîíñòðóêòîð êîïèðîâàíèÿ
    a.SetIm(10);
    a.SetRe(25);
    c = a.Add(d);
    b = b.Mult(a);
    std::cin >> a;
    std::cout << "A = " << a << std::endl;
    std::cout << "B = " << b << std::endl;
    c = a + b;
    c = a.operator+(b);
    std::cout << "C = A + B = " << a << " + " << b << " = " << c << std::endl;
    b = b * a;
    int q1 = 10;
    int q2 = 15;
    int q3 = 20;
    c = c;
    25;
    d = c;
    return 0;
}
