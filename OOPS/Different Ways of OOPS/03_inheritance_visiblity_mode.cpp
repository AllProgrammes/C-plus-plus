#include <iostream>
using namespace std;
class employee
{
    int pvt; // inherited derived cannot access to this ->private members/fucntions
public:
    employee() // making this fixes error [no default constructor exists for class "employee"]
    {
        salary = 0;
    }
    int employee_ID, salary; // made public because private members don't get inherited
};
class programmer : public employee
{
public:
    int skill_code;          // just another varible
    programmer(int set_code) // a construtor to set the skill code of the programmer
    {
        skill_code = set_code;
        input();
        display();
    }
    void input() // made a function to take input from the user
    {
        cout << "Enter the employee ID : ";
        cin >> employee_ID;
        cout << "Enter salary : ";
        cin >> salary;
    }
    void display() // made a function to display the output to the user
    {
        cout << "Employee ID : " << employee_ID << endl;
        cout << "Salary : " << salary << endl;
        cout << "Skill Code : " << skill_code << endl;
    }
};
int main()
{
    programmer rocky(5);
    // If we do this --> rocky.salary;
    //  give the error [member "employee::salary" (declared at line 11) is inaccessible]
    // Reason : In inheritance if we dont mention the type of it then by default it will be private
    // but if change the type to public[as done at line number 13] then it will enherit all members from base class i.e salary from class employee
    cout << rocky.salary; // now this will work
    return 0;
}