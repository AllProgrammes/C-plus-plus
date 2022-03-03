#include <iostream>
using namespace std;
int main()
{
    int temp = 1;
    for (int s = 0; s < 9; s++)
    {
        cout << "x";
    }
    cout << endl;
    for (int i = 3; i >= 1; i--)
    {

        for (int s = 0; s < temp; s++)
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
    cout << "    x";

    return 0;
}