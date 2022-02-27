#include <iostream>
using namespace std;
int main()
{
    int row, col, s;
    // top space segment
    for (s = 1; s < 6; s++)
    {
        cout << " ";
    }
    // top segment
    for (s = 1; s < 2; s++)
    {
        cout << "x";
    }
    cout << "\n";
    for (row = 1; row < 5; row++)
    {

        // space segment
        for (s = 4; s >= row; s--)
        {
            cout << " ";
        }
        // midde outline segment
        for (s = 1; s < 2; s++)
        {
            cout << "x";
        }
        // middle space segment
        for (col = 1; col <= (2 * row) - 1; col++)
        {
            cout << " ";
        }
        // middle outline segment
        for (s = 1; s < 2; s++)
        {
            cout << "x";
        }
        cout << "\n";
    }
    // buttom segment
    for (s = 1; s < 7; s++)
    {
        cout << "x ";
    }
    return 0;
}