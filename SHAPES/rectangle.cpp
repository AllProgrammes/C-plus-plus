#include <iostream>
using namespace std;
int main()
{
    int row, col, s;
    for (s = 0; s < 22; s++)
    {
        cout << "x";
    }
    cout << "\n";
    for (row = 0; row < 5; row++)
    {
        for (col = 0; col < 1; col++)
        {
            cout << "x";
        }
        for (s = 0; s < 20; s++)
        {
            cout << " ";
        }
        for (col = 0; col < 1; col++)
        {
            cout << "x";
        }
        cout << "\n";
    }
    for (s = 0; s < 22; s++)
    {
        cout << "x";
    }

    return 0;
}