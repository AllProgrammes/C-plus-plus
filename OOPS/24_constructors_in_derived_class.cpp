#include <iostream>
using namespace std;
class base1
{
protected:
    int data1;

public:
    base1(int a)
    {
        data1 = a;
        cout << "Base 1 constructor was called " << endl;
    }
};
class base2
{
protected:
    int data2;

public:
    base2(int b)
    {
        data2 = b;
        cout << "Base 2 constructor was called " << endl;
    }
};
class derived : public base1, virtual public base2 // but here virtual class will get priority as base 2 constructor will be called first followed by base1 constructor
// class derived : public base1,public base2 --> If we do this then as usual base 1 will execute first then base 2
// class derived : public base2,public base1 --> If we do this then as usual base 2 will execute first then base 1
{
protected:
    int data3;

public:
    derived(int a, int b, int c) : base1(a), base2(b) // special statement
    {
        data3 = c;
        cout << "Derived class constructor was called " << endl;
    }
    void getdata()
    {
        cout << "The value of data1 is " << data1 << endl;
        cout << "The value of data2 is " << data2 << endl;
        cout << "The value of data3 is " << data3 << endl;
    }
};
int main()
{
    derived data(1, 2, 3);
    data.getdata();
    return 0;
}