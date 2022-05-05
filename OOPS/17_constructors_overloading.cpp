#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(int x) // takes one integer only
    {
        a = x;
        b = 0;
    }
    complex(int x, int y) // takes 2 integer
    {
        a = x;
        b = y;
    }
    complex(int x, int y, int z) // take 3 integer
    {
        a = x;
        b = z;
    }
    void printnum() // made a function to print num
    {
        cout << "Complex number is " << a << " + " << b << "i" << endl;
    }
};
int main()
{
    complex test1(1); // This will use the constructor on line 8
    test1.printnum();

    complex test2(1, 2); // This will use the constructor on line 13
    test2.printnum();

    complex test3(1, 2, 3); // This will use the constructor on line 18
    test3.printnum();
    return 0;
}