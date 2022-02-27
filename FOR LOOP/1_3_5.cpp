#include <iostream>
using namespace std;
int main()
{
    int row, col, s;
    for (row = 1; row < 5; row++)
    {
        for (s = 3; s >= row; s--)
        {
            cout << " ";
        }
        for (col = 0; col < row; col++)
        {
            cout << "x";
        }
        for (col = 1; col < row; col++)
        {
            cout << "x";
        }
        cout << "\n";
    }

    return 0;
}