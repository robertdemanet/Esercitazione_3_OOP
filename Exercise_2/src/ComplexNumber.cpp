#include "ComplexNumber.hpp"
#include<iostream>
using namespace std;
namespace ComplexLibrary {


ostream& operator<<(ostream& os,const Complex &c){
    if(c.image>0)
        os<<c.real<<"+"<<c.image<<"i";
    if(c.image<0)
        os<<c.real<<c.image<<"i";
    return os;
}

Complex operator+(const Complex &c1,const Complex &c2){
    Complex c(c1.real+c2.real,c1.image+c2.image);
    return c;
}
bool operator==(const Complex &c1,const Complex &c2)
{
    return (c1.real==c2.real) && (c1.image==c2.image);
}

Complex coniugate(const Complex &c1){
    Complex c(c1.real,-c1.image);
    return c;
}
Complex operator+(const Complex&c1,const double &d1)
{
    Complex c(c1.real+d1,c1.image);
    return c;

}
}
