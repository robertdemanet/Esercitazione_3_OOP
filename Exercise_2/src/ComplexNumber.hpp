#ifndef __COMPLEX_N
#define __COMPLEX_N

#include <iostream>
#include <cmath>

using namespace std;
namespace ComplexLibrary{

struct Complex{
    double real;
    double image;
    //Costruttore
    Complex(double r,double i):
        real(r),
        image(i)
    {

    }


};

ostream& operator<<(ostream& os,const Complex &c);
Complex operator+(const Complex &c1,const Complex &c2);
Complex operator+(const Complex&c1,const double &d1);
bool operator==(const Complex &c1,const Complex &c2);
Complex coniugate(const Complex &c1);


}
#endif
