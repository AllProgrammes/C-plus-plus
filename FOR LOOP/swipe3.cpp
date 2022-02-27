#include <iostream>
using namespace std;
int main()
{
    int a = 5, b = 3, c;
    c = b; // b=0
    b = a; // b=5
    a = c; // a=3
    cout << "a = " << a << "\n"
         << "b = " << b;
    return 0;
}
