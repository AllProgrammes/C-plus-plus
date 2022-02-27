#include <iostream>
using namespace std;
int main()
{
    int p, t, r, a = 100;
    cout << "Enter the principle , rate and time (in year)\n";
    cin >> p >> r >> t;
    cout << "Your simple intrest is " << ((p * r * t) / a);
    return 0;
}