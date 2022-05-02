#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    void setdata() // made a function to take input a and b from the user
    {
        cout << "Enter the value of a : ";
        cin >> a;
        cout << "Enter the value of b : ";
        cin >> b;
    }
    void setdata_sum(complex x, complex y) // took the passed class from int main() and accessed the value of a,b of passed class
    {
        a = x.a + y.a; // x and y are nothing but c1 and c2
        b = x.b + y.b; // and  by doing x.b we are doing nothing but c1.b
    }
    void display() // a typical AF fucntion to display a and b
    {
        cout << "Your complex number is " << a << " + " << b << "i\n\n";
    }
};
int main()
{
    complex c1, c2, c3; // made 3 objects
    c1.setdata();
    c1.display();

    c2.setdata();
    c2.display();

    c3.setdata_sum(c1, c2); // passed the object c1 and c2 to the function to its thing
    c3.display();
    return 0;
}