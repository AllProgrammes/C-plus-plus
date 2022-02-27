#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "ENTER TWO NUMBERS : ";
    cin >> a >> b;
    if (a > b)
    {
        cout << a << " is the grater number";
    }
    else
    {
        cout << b << " is the greater number";
    }
    return 0;
}