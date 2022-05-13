#include <iostream>
using namespace std;
class student
{
protected:
    int roll_number;

public:
    void get_roll_number()
    {
        cout << "Your roll number is " << roll_number << endl;
    }
    void set_roll_number()
    {
        cout << "Enter your roll number : ";
        cin >> roll_number;
    }
};
class exam : public student
{
protected:
    float maths, science;

public:
    void set_marks()
    {
        cout << "Enter your maths marks : ";
        cin >> maths;
        cout << "Enter your science marks : ";
        cin >> science;
    }
    void get_marks()
    {
        cout << "Your maths marks are " << maths << " and science marks are " << science << endl;
    }
};
class result : public exam
{
protected:
    float per;

public:
    void percentage()
    {
        per = ((maths + science) / 200) * 100;
        cout << "Your pecentage is " << per << endl;
    }
};
int main()
{
    result darling;
    darling.set_roll_number();
    darling.get_roll_number();
    darling.set_marks();
    darling.get_marks();
    darling.percentage();
    return 0;
}