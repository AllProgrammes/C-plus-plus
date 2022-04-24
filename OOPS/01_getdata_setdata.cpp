#include <iostream>
using namespace std;
class students
{
protected:
    int marks[20];
    string name[20];

public:
    void setdata(int number)
    {
        for (int i = 0; i < number; i++)
        {
            cout << "\nEnter the name of student " << i + 1 << endl;
            cin >> name[i];
            cout << "Enter the marks of student " << i + 1 << endl;
            cin >> marks[i];
        }
    }
    void getdata(int find)
    {
        find = find - 1;
        cout << "\nName is " << name[find] << "\nTotal Marks scored is " << marks[find] << endl;
    }
};
int main()
{
    students data;
    int number, find;
    cout << "Enter the number of students : \n";
    cin >> number;
    data.setdata(number);
    cout << "\nEnter the index number to know name and marks of any student : ";
    cin >> find;
    data.getdata(find);
    return 0;
}