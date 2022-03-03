#include <iostream>
using namespace std;
int main()
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