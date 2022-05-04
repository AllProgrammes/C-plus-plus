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
    complex(); // made constructor
    // note: you may think it is a simple function but its not ,because function need a return type but constructor don't
};
complex::complex()
{
    a = 21; // assigned values to the variable a
    b = 13; // assigned values to the variable b
}
int main()
{
    complex data;    // made object
    data.printnum(); // called public fucntion via object "data"
    // I HOPE YOU UNDERTOOD :)
    return 0;
}