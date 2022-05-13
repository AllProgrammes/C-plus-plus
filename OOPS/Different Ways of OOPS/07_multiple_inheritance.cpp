#include <iostream>
using namespace std;
class master1
{
protected:
    int data1;

public:
    void setdata1()
    {
        cout << "Enter the value of data1 : ";
        cin >> data1;
    }
    void getdata1()
    {
        cout << "The value of data1 is " << data1 << endl;
    }
};
class master2
{
protected:
    int data2;

public:
    void setdata2()
    {
        cout << "Enter the value of data2 : ";
        cin >> data2;
    }
    void getdata2()
    {
        cout << "The value of data2 is " << data2 << endl;
    }
};
class derived : public master1, public master2
{
protected:
    int data3;

public:
    void sum()
    {
        data3 = data1 + data2;
    }
    void getdata3()
    {
        cout << "The value of data3 is " << data3 << endl;
    }
};
int main()
{
    derived data;
    data.setdata1();
    data.setdata2();

    data.getdata1();
    data.getdata2();
    data.sum();
    data.getdata3();
    return 0;
}