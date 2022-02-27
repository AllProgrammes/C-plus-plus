#include <iostream>
using namespace std;
int main()
{
    int n, i = 0, even = 0, odd = 0;
    cout << "enter the value of n : ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            even++;
        }
    }
    cout << "total even no. is " << even << " that are :-\n";
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << "\n";
        }
    }
    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            odd++;
        }
    }
    cout << "total even no. is " << odd << " that are :-\n";
    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << "\n";
        }
    }
    return 0;
}