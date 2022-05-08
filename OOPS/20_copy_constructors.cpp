#include <iostream>
using namespace std;
class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }
    Number(int num)
    {
        a = num;
    }

    //----------------- Even if I remove this then also the program will run without error
    //----------------- because compiler makes a copy constructor by itself

    Number(Number &obj) // it will take a object and copy its value
    {
        a = obj.a;
        display();
        cout << "Copy Constructor was called !\n"
             << endl; // proof that this ran/executed
    }

    void display()
    {
        cout << "The value of a is " << a << endl;
    }
};
int main()
{
    Number num1(5), num2(8), num3(9);
    Number x(num1); // passing the object "num1" to copy constructor

    Number y = num2; // This will call the constructor which I made above (reason -> see line number 44)

    Number z; // made object
    z = num3; // z copies the value from num3 using defalut copy constructor of compiler
    z.display();

    /* Q. Why the things are working fine without any error ?
       Ans : because if we make and assign object in the same line then compiler does it aumantically
       but if we assign in the next line then it will use its default copy constructor */
    return 0;
}