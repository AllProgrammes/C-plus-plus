#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
class calculator
{
    float a, b;
    void square_root();
    void percentage();
    void power();
    void pie();
    void cos_value();
    void sin_value();
    void tan_value();

public:
    char option;
    void choice()
    {
        cout << "Want to continue ? If yes then enter Y/y , else press any key to exit\n";
        cin >> option;
        if (option == 'Y' || option == 'y')
        {
            setdata();
        }
        else
            exit(0);
    }
    void setdata()
    {
        int choice;
        cout << "\nWhat do you want to do ?\n1. Power\n2. Square Root\n3. Percentage\n4. Pi\n5. Cos \n6. Sin \n7. Tan"
             << endl;
        cout << "Enter index here : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            power();
            break;
        case 2:
            square_root();
        case 3:
            percentage();
        case 4:
            pie();
        case 5:
            cos_value();
        case 6:
            sin_value();
        case 7:
            tan_value();
        default:
            cout << "Please enter a correct index !" << endl;
            setdata();
            break;
        }
    }
};
int main()
{
    calculator data;
    data.setdata();
    return 0;
}
void calculator::square_root()
{
    cout << "Enter the number : ";
    cin >> a;
    cout << "Sqaure root of " << a << " is " << sqrt(a) << endl;

    choice();
}
void calculator::percentage()
{
    cout << "Enter the numerator value of the fraction : ";
    cin >> a;
    cout << "Enter the denominator value of the fraction : ";
    cin >> b;
    cout << a << " is " << ((a / b) * 100) << "% of " << b << endl;
    choice();
}
void calculator::power()
{
    cout << "Enter the number : ";
    cin >> a;
    cout << "Enter the exponential power of this number : ";
    cin >> b;
    cout << "The real value of this number is " << pow(a, b) << endl;
    choice();
}
void calculator::pie()
{
    cout << "Enter the number : ";
    cin >> a;
    cout << "The value of " << a << "pi is " << a * 3.14 << endl;
}
void calculator::cos_value()
{
    cout << "Enter the number : ";
    cin >> a;
    cout << "The value of cos(" << a << ")"
         << " is ->> " << cos(a) << endl;
    choice();
}
void calculator::sin_value()
{
    cout << "Enter the number : ";
    cin >> a;
    cout << "The value of sin(" << a << ")"
         << " is ->> " << sin(a) << endl;
    choice();
}
void calculator::tan_value()
{
    cout << "Enter the number : ";
    cin >> a;
    cout << "The value of tan(" << a << ")"
         << " is ->> " << tan(a) << endl;
    choice();
}