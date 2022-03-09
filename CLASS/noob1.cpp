#include <iostream>
using namespace std;
class sum
{
private:
    int a;
    int b;

public:
    void data(int x, int y)
    {
        a = x;
        b = y;
    }
    int cal()
    {
        int sum = a + b;
        return sum;
    }
};
int main()
{
    sum r;
    int c, d;
    cout << "Enter the number a and b : ";
    cin >> c >> d;
    r.data(c, d);
    cout << "Sum = " << r.cal();
    return 0;
}