#include "std_lib_facilities.h"

int main()
{
    // változó csere xorral

    int a = 105;

    int b = 11;

    cout << "a értéke: " << a;

    cout << "\nb értéke: " << b;

    a = a xor b;

    b = b xor a;

    a = a xor b;

    cout << "\nXOR után:\na értéke: " << a;

    cout << "\nb értéke: " << b << "\n";
}
