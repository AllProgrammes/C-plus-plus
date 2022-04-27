#include <iostream>
using namespace std;
class Employee // made a class named employee
{
    int id;
    static int counter; // static variable thats why it will get initialized with 0 and take a permanent memory and gets override each time it will receive a new value

public:
    void setdata() // made a fucntion to take value from the user
    {
        cout << "Enter the ID : ";
        cin >> id;
        counter++;
    }
    void getdata() // made a function to get/show the entered value to the user
    {
        cout << "The ID of employee " << counter << " is " << id << endl;
    }
};

int Employee::counter; // did this so that it can be updated with diffrent function call
// int Employee::counter=1000; it can be done like this also

int main()
{
    Employee Birju, Shyam, Raju; // made 3 objects
    Birju.setdata();             // fucntion call of object birju
    Birju.getdata();

    Shyam.setdata(); // fucntion call of object shyam
    Shyam.getdata();

    Raju.setdata(); // fucntion call of object raju
    Raju.getdata();
    return 0;
}