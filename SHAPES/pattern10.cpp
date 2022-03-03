#include <iostream>
using namespace std;
int main()
{
    int temp = 5;
    for (int i = 1; i <= 5; i++)
    {
        for (int s = 1; s <= temp; s++)
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