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
    int temp = 5;
    cout << "      x" << endl;
    for (int i = 1; i <= 4; i++)
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
    return 0;
}
int lower()
{
    int temp = 2;
    for (int i = 3; i >= 1; i--)
    {

        for (int s = 0; s <= temp; s++)
        {
            cout << " ";
        }
        temp++;
        for (int s = 1; s < 2; s++)
        {
            cout << "x";
        }
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
    cout << "      x";

    return 0;
}
