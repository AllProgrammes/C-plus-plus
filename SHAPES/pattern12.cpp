#include <iostream>
using namespace std;
int upper();
int lower();
int main()
{
    upper();
    lower();
    return 0;
}
int upper()
{
    int temp = 1;
    for (int i = 5; i >= 1; i--)
    {
        for (int s = 1; s < temp; s++)
        {
            cout << " ";
        }
        temp++;
        for (int c = 1; c <= i; c++)
        {
            cout << "x ";
        }
        cout << endl;
    }

    return 0;
}
int lower()
{
    int temp = 5;
    for (int i = 1; i <= 5; i++)
    {
        for (int s = 1; s < temp; s++)
        {
            cout << " ";
        }
        temp--;
        for (int c = 1; c <= i; c++)
        {
            cout << "x ";
        }
        cout << endl;
    }

    return 0;
}