#include <iostream>
using namespace std;
class complex
{
    int a, b;

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
    friend complex sumcomplex(complex c1, complex c2);
};
complex sumcomplex(complex c1, complex c2)
{
    complex c3;
    c3.a = c1.a + c2.a;
    c3.b = c1.b + c2.b;
    c3.getdata();
}
int main()
{
    complex c1, c2, c3;
    c1.setdata();
    c1.getdata();

    c2.setdata();
    c2.getdata();

    sumcomplex(c1, c2);
    return 0;
}