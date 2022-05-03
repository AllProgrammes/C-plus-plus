#include <iostream>
using namespace std;
class calculate;
class complex
{
    int a, b;
    friend class calculate;

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
class calculate
{
public:
    void sumcomplex(complex x, complex y)
    {
        cout << (x.a + y.a) << " + " << (x.b + y.b) << "i" << endl;
    }
};
int main()
{
    complex c1, c2;
    calculate c3;
    c1.setdata();
    c1.getdata();

    c2.setdata();
    c2.getdata();

    c3.sumcomplex(c1, c2);
    return 0;
}