#include <iostream>
using namespace std;
int main()
{
    int row, col, s;
    int breadth, length;
    cout << "Enter the length and breadth of Rectangle : ";
    cin >> length >> breadth;

    for (col = 0; col < length; col++)
    {
        cout << "x ";
    }
    cout << "\n";
    for (row = 0; row < (breadth - 2); row++)
    {
        for (col = 0; col < 1; col++)
        {
            cout << "x ";
        }
        for (s = 0; s < (length - 2); s++)
        {
            cout << "  ";
        }
        for (col = 0; col < 1; col++)
        {
            cout << "x";
        }
        cout << "\n";
    }
    for (col = 0; col < length; col++)
    {
        cout << "x ";
    }
    return 0;
}