#include <iostream>
using namespace std;
class co_ordinates // made class
{
    int x, y; // made 2 int variables

public:
    co_ordinates(int, int);                              // made constructor which take 2 integers
    void compare(co_ordinates data1, co_ordinates data2) // made function which takes 2 class
    {
        x = data1.x - data2.x; // diff of x of one class and the other
        y = data1.y - data2.y; // diff of x of one class and the other
        cout << "The difference between x co-ordinates is " << x << " and y co-ordinates is " << y << endl;
    }
};
co_ordinates::co_ordinates(int a, int b) //
{
    x = a; // assigned variable a to the variable x
    y = b; // assigned variable b to the variable y
}
int main()
{
    int x1, y1, x2, y2;
    cout << "Enter the value of x1 : ";
    cin >> x1;
    cout << "Enter the value of y1 : ";
    cin >> y1;
    cout << "Enter the value of x2 : ";
    cin >> x2;
    cout << "Enter the value of y2 : ";
    cin >> y2;
    co_ordinates data1(x1, y1);
    co_ordinates data2(x2, y2);
    co_ordinates data3(0, 0);    // passed 0,0 because we canot leave it just like that because we have mentioned that we wil give 2 numbers of int type
    data3.compare(data1, data2); // gave compare function data1 and data2 objects
    return 0;
}