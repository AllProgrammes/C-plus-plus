#include <iostream>
using namespace std;
class complex // made classs
{
    int a, b; // made 2 integers a and b

public:
    void printnum() // made a function to print num
    {
        cout << "Complex number is " << a << " + " << b << "i" << endl;
    }
    complex(int x, int y); // made a parameterized constructor
    // note: you may think it is a simple function but its not ,because function need a return type but constructor don't
};
complex::complex(int x, int y)
{
    a = x; // assigned variable x to the variable a
    b = y; // assigned variable y to the variable b
}
int main()
{
    //-------------------------IMPLICIT CALL--------------------
    complex data1(12, 34); // made object with values in it

    //-------------------------EXPLICIT CALL--------------------
    complex data2 = complex(10, 17);

    data1.printnum(); // called public fucntion via object "data"
    data2.printnum(); // called public fucntion via object "data2"

    // I HOPE YOU UNDERTOOD :)
    return 0;
}