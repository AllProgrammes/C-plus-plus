#include <iostream>
using namespace std;
int main()
{
    int temp = 8;
    cout << "         x" << endl;
    for (int i = 1; i <= 5; i++)
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
    for (int s = 0; s < 20; s++)
    {
        cout << "x";
    }
    cout << endl;
    for (int s = 0; s < 20; s++)
    {
        cout << "x";
    }
    return 0;
}