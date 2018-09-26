#include "std_lib_facilities.h"

int main()
{
    // változó csere szorzattal

    int a = 1997;

    int b = 3;

    cout << "a értéke: " << a;

    cout << "\nb értéke: " << b;

    a = a * b; 

    b = a / b; 

    a = a / b;

    cout << "\nSzorzat után:\na értéke: " << a;

    cout << "\nb értéke: " << b << "\n";
}
