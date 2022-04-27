#include <iostream>
using namespace std;
class Employee
{
    static int counter;
    int id;

public:
    static void display() // static fucntion can only access static variables
    {
        cout << counter << endl; // counter as said above is set static
    }
    void setdata() // made a fucntion to take value from the user
    {
        cout << "Enter the ID : ";
        cin >> id;
        counter++;
    }
    void getdata()
    {
        cout << "Employee ID is " << id << " and Employee Count is ";
        display(); // calling static fucntion[display] to display static variable[counter]
    }
};
int Employee::counter; // counter set to 0
int main()
{
    Employee ramesh, raju, shyam; // made 3 objects
    ramesh.setdata();
    ramesh.getdata();

    raju.setdata();
    raju.getdata();

    shyam.setdata();
    shyam.getdata();
    return 0;
}