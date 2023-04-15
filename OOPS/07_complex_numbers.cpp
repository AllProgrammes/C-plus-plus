#include <iostream>
using namespace std;
static int count = 1;
class complex
{
    int a, b;

public:
    void setdata() // made a function to take input a and b from the user
    {
        cout << "Enter the value of a" << count << " and b" << count << " : ";
        cin >> a >> b;
        count++;
    }
    void setdata_sum(complex x, complex y) // took the passed class from int main() and accessed the value of a,b of passed class
    {
        a = x.a + y.a; // x and y are nothing but c1 and c2
        b = x.b + y.b; // and  by doing x.b we are doing nothing but c1.b
    }
    void setdata_sub(complex x, complex y) // took the passed class from int main() and accessed the value of a,b of passed class
    {
        a = x.a - y.a; // x and y are nothing but c1 and c2
        b = x.b - y.b; // and  by doing x.b we are doing nothing but c1.b
    }
    void display() // a typical AF fucntion to display a and b
    {
        if (a < 0 && b < 0)
        {
            cout << "Sum of both the complex numbers is " << a << " " << b << "i\n";
        }
        else if (a < 0)
        {
            cout << "Sum of both the complex numbers is " << a << " + " << b << "i\n";
        }
        else if (b < 0)
        {
            cout << "Sum of both the complex numbers is " << a << " " << b << "i\n";
        }
        else
            cout << "Sum of both the complex numbers is " << a << " + " << b << "i\n";
    }
};
int main()
{
    complex c1, c2, c3; // made 3 objects
    c1.setdata();
    c2.setdata();

    c3.setdata_sum(c1, c2); // passed the object c1 and c2 to the function to its thing
    c3.display();           // to display the complex number after doing sum

    c3.setdata_sub(c1, c2); // passed the object c1 and c2 to the function to its thing
    c3.display();           // display the complex number after doing substraction
    return 0;
}