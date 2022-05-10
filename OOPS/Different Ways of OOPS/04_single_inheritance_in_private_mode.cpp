#include <iostream>
using namespace std;
class base_class
{

public:
    int data1; // this cannot be accessed in that derived function so we need to make it public
    int data2;
    /*

    void setdata() // after doing it private it cannot be called in int main() so we can make of it in out derived functiob so that it will be accessable
    {
        data1 = 10;
        data2 = 20;
    }

    */
    int getdata1();
    int getdata2();
};
int base_class::getdata1()
{
    return data1;
}
int base_class::getdata2()
{
    return data2;
}
class derived_class : private base_class
{
    int data3;

public:
    void setdata();
    void process();
    void display();
};
void derived_class::setdata()
{
    data1 = 10;
    data2 = 20;
}
void derived_class::process()
{
    data3 = data2 * getdata1();
}
void derived_class::display()
{
    cout << "The value of data1 is " << getdata1() << endl;
    cout << "The value of data2 is " << data2 << endl;
    cout << "The value of data3 is " << data3 << endl;
}
int main()
{
    derived_class object;
    object.setdata();
    object.process();
    object.display();
    return 0;
}