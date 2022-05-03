#include <iostream>
using namespace std;
class Y; // made universal declaration
class X  // mae class X
{
    int value1;
    friend void swap_value(X &a, Y &b); // linked sum function to class X

public:
    void x_display()
    {
        cout << "The data of value1 is " << value1 << endl;
    }
    void takedata(int a)
    {
        value1 = a;
    }
};
class Y // made class Y
{
    int value2;
    friend void swap_value(X &a, Y &b); // linked sum function to class Y

public:
    void y_display()
    {
        cout << "The data of value2 is " << value2 << endl;
    }
    void takedata(int b)
    {
        value2 = b;
    }
};
//----------CALL BY REFERENCE-----------
void swap_value(X &a, Y &b) // took the address of object a and object b in class X and Y
{
    int temp = a.value1;
    a.value1 = b.value2;
    b.value2 = temp;
}
int main()
{
    X data1;
    Y data2;

    data1.takedata(5); // gave 5 as a
    data2.takedata(6); // gave 6 as b

    //--------Before swapping---------------//
    cout << "BEFORE SWAP" << endl;
    data1.x_display();
    data2.y_display();

    swap_value(data1, data2);

    //--------After swapping---------------//

    cout << "\nAFTER SWAP" << endl;
    data1.x_display();
    data2.y_display();
}