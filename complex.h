#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED
#include<iostream>
using namespace std;
class Complex
{private:
    double real;
    double imag;
public:
    Complex(double r=0,double i=0)
    {
        real=r;
        imag=i;
    }
    void add(const Complex &r1,const Complex &r2)
    {
        real=r1.real+r2.real;
        imag=r1.imag+r2.imag;
    }
    void sub(const Complex &r1,const Complex &r2)
    {
        real=r1.real-r2.real;
        imag=r1.imag-r2.imag;
    }
    void multi(const Complex &r1,const Complex &r2)
    {
        real=r1.real*r2.real-r1.imag*r2.imag;
        imag=r1.real*r2.imag+r1.imag*r2.real;
    }
    void display()
    {
        if(imag>0)
        {
            cout<<real<<'+'<<imag<<'i';
        }
        if(imag==0)
        {
            cout<<real;
        }
        if(imag<0)
        {
            cout<<real<<imag<<'i';
        }
    }

};


#endif // COMPLEX_H_INCLUDED
