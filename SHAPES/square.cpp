#include <iostream>
using namespace std;
int main()
{
    int row, col, s;
    int side;
    cout << "Enter the side of square : ";
    cin >> side;

    for (col = 0; col < side; col++)
    {
        cout << "x ";
    }
    cout << "\n";
    for (row = 0; row < (side - 2); row++)
    {
        for (col = 0; col < 1; col++)
        {
            cout << "x ";
        }
        for (s = 0; s < (side - 2); s++)
        {
            cout << "  ";
        }
        for (col = 0; col < 1; col++)
        {
            cout << "x";
        }
        cout << "\n";
    }
    for (col = 0; col < side; col++)
    {
        cout << "x ";
    }
    return 0;
}