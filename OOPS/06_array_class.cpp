#include <iostream>
using namespace std;
class Employee
{
    string emp_id; // took it as string because it was giving vague value [idk how]
    string emp_name;
    static int index; // made this static so that with each fucntion call it will increase and retain itself

public:
    void setdata()
    {
        cout << "\nIndex " << index << endl;
        cout << "Enter the name of the Employee : ";
        cin >> emp_name;
        cout << "Enter the ID of the employe : ";
        cin >> emp_id;
        index++;
    }
    void getdata()
    {
        cout << "\nIndex " << index - 1 << endl;
        cout << "Name is " << emp_name << endl;
        cout << "ID is " << emp_id << endl;
    }
};
int Employee::index = 1;
int main()
{
    int size, view;
    cout << "Enter the total numbers of Employee in your company : ";
    cin >> size;
    Employee data[size];
    for (int i = 0; i < size; i++)
    {
        data[i].setdata();
    }
    cout << "\n\nEnter the index of the employee to see the details" << endl;
    cin >> view;
    data[view - 1].getdata();
    return 0;
}