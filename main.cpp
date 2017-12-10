#include <iostream>
#include "complex.h"
using namespace std;

int main()
{
    double a,b,c,d;
    char e;
    Complex c3;
    cout<<"please input c1(real part,imag part):";
    cin>>a>>b;
    Complex c1(a,b);

    cout<<"please input c2(real part,imag part):";
    cin>>c>>d;
    Complex c2(c,d);

    cout<<"please select your move :+,-,or *:";
    cin>>e;

    switch(e)
    {
    case'+':
        c3.add(c1,c2);
        break;
    case '-':
        c3.sub(c1,c2);
        break;
    case '*':
        c3.multi(c1,c2);
        break;
    }
    c3.display();
    return 0;


}
