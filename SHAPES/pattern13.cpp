#include <iostream>
using namespace std;
int main()
{
    int temp = 5;
    cout << "      x" << endl;
    for (int i = 1; i <= 3; i++)
    {
        for (int s = 1; s <= temp; s++)
        {
            cout << " ";
        }
        for (int s = 1; s < 2; s++)
        {
            cout << "x";
        }
        temp--;
        for (int c = 1; c <= (i * 2) - 1; c++)
        {
            cout << " ";
        }
        for (int s = 1; s < 2; s++)
        {
            cout << "x";
        }
        cout << endl;
    }
    cout << "  ";
    for (int s = 0; s < 9; s++)
    {
        cout << "x";
    }
    return 0;
}