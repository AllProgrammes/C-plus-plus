#include <iostream>
using namespace std;
class complex; // universal decalaration so that compiler will know that yes a class named "complex" is present in the program
class calculator
{
public:
    int add(int a, int b) // simple AF add function -_-
    {
        return a + b;
    }
    int sumcomplex(complex x, complex y); // function decalration
};
class complex
{
    int a, b;
    friend int calculator::sumcomplex(complex, complex); // made calculator complex friend     lol

public:
    void setdata()
    {
        cout << "Enter the value of a : ";
        cin >> a;
        cout << "Enter the value of b : ";
        cin >> b;
    }
    void getdata()
    {
        cout << "Complex number is " << a << " + " << b << "i\n\n";
    }
};
int calculator::sumcomplex(complex x, complex y) // deailed declaration of the function sumcomplex
{
    cout << (x.a + y.a) << " + " << (x.b + y.b) << "i" << endl;
}
int main()
{
    complex c1, c2;
    calculator c3;
    c1.setdata();
    c1.getdata();

    c2.setdata();
    c2.getdata();

    c3.sumcomplex(c1, c2);
    return 0;
}