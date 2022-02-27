#include <iostream>
using namespace std;
int main()
{
    float n, i;
    float sum = 0.00;
    cout << "enter the value of n : ";
    cin >> n;
    for (i = 2; i <= n; i = i + 2)
    {
        sum = sum + (1 / (i * i));
    }
    cout << sum;
    return 0;
}