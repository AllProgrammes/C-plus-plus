#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, x = 0, fact = 1;
    float ans, sum = 0;
    cout << "Enter the value of n : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
        // cout << pow(n, x) << "\t" << fact << endl;
        ans = pow(n, x) / fact;
        cout << ans << endl;
        x++;
        sum = sum + ans;
    }
    cout << "Sum = " << sum << endl;
    return 0;
}