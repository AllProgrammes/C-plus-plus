#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "ENTER 3 NUMBERS : ";
    cin >> a >> b >> c;
    if (a > b && a > c)
    {
        cout << a << " is the grater number";
    }
    else if (b > a && b > c)
    {
        cout << b << " is the greater number";
    }
    else
    {
        cout << c << " is the greater number";
    }
    return 0;
}