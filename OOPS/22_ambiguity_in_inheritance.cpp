#include <iostream>
using namespace std;
class base1
{
public:
    void greet()
    {
        cout << "Hello ! " << endl;
    }
};
class base2
{
public:
    void greet()
    {
        cout << "Welcome to my program " << endl;
    }
};
class derived : public base1, public base2
{
public:
    void greet() // manually solving ambiguity
    {
        base1::greet();
        base2::greet();
    }
};
class A
{
public:
    void welcome()
    {
        cout << "Hello Lomdu 1" << endl;
    }
};
class B : public A
{
public:
    void welcome()
    {
        cout << "Hello Lomdu 2" << endl; // this will overwrite welcome function at line 30 but if I delete this then this will call that function
    }
};
int main()
{
    derived welcome;
    welcome.greet();

    B lomdu_welcome;
    lomdu_welcome.welcome();
    return 0;
}