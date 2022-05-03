#include <iostream>
using namespace std;
class Y; // made universal declaration
class X  // mae class X
{
    int value1;
    friend int sum_of_classes(X a, Y b); // linked sum function to class X

public:
    void takedata(int a)
    {
        value1 = a;
    }
};
class Y // made class Y
{
    int value2;
    friend int sum_of_classes(X a, Y b); // linked sum function to class Y

public:
    void takedata(int b)
    {
        value2 = b;
    }
};
int sum_of_classes(X a, Y b)
{
    return a.value1 + b.value2;
}
int main()
{
    X data1;
    Y data2;
    data1.takedata(5); // gave 5 as a
    data2.takedata(6); // gave 6 as b
    cout << "The sum of both the value1 in class X and value2 in the class Y is " << sum_of_classes(data1, data2) << endl;
    return 0;
}