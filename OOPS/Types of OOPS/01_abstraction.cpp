#include <iostream>
using namespace std;
class emp_data
{
public:
    virtual void ask_for_promotion() = 0;
};
class employee : emp_data
{
    string name, ID;
    int experience, age;
    static int index;

public:
    void setdata()
    {
        cout << "Index " << index << endl;
        cout << "Enter the name : ";
        cin >> name;
        fflush(stdin);
        cout << "Enter your employee ID : ";
        cin >> ID;
        cout << "Enter your work experience : ";
        cin >> experience;
        cout << "Enter your age : ";
        cin >> age;
        index++;
        cout << endl;
    }
    void getdata()
    {
        cout << "Name = " << name << endl;
        cout << "Employee ID = " << ID << endl;
        cout << "Work experience = " << experience << endl;
        cout << "Age = " << age << endl;
        cout << endl;
    }
    void ask_for_promotion()
    {
        cout << endl;
        if (age > 30)
        {
            cout << "Yes you are promoted :) ";
        }
        else
            cout << "Sorry some day soon :( Keep trying ";
    }
};
int employee::index = 1;
int main()
{
    int size, get_info;
    cout << "Enter the number of employee in your company : ";
    cin >> size;
    employee emp[size];
    for (int i = 0; i < size; i++)
    {
        emp[i].setdata();
    }
    for (int i = 0; i < size; i++)
    {
        emp[i].getdata();
    }
    cout << "Enter the index of your employee : ";
    cin >> get_info;
    emp[get_info - 1].ask_for_promotion();
    return 0;
}