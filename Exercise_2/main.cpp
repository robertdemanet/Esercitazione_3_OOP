#include "src/ComplexNumber.hpp"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    ComplexLibrary::Complex z1(3,4);
    ComplexLibrary::Complex z2(2,-5);
    ComplexLibrary::Complex z3(3,4);

    ComplexLibrary::Complex sum = z1 + z2;


    cout << sum << endl;
    cout << operator==(z1,z2) << endl;
    cout << operator==(z1,z3) << endl;
    cout << coniugate(z2) << endl;

}
