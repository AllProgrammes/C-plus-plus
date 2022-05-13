#include <iostream>
using namespace std;
class calculator
{
    int a, b;
    void sum();
    void product();
    void difference();
    void quoteint();

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
        cout << "Enter num1 : ";
        cin >> a;
        cout << "Enter num2 : ";
        cin >> b;
        cout << "\nWhat do you want to do ?\n1. Substract\n2. Addition\n3. Multiplication\n4. Division\n"
             << endl;
        cout << "Enter index here : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            difference();
            break;
        case 2:
            sum();
        case 3:
            product();
        case 4:
            quoteint();
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
void calculator::sum()
{
    cout << "Sum is = " << a + b << endl;
    choice();
}
void calculator::product()
{
    cout << "Product is = " << a * b << endl;
    choice();
}
void calculator::difference()
{
    if (a > b)
    {
        cout << "Difference is = " << a - b << endl;
        choice();
    }
    else if (a < b)
    {
        cout << "Difference is = " << b - a << endl;
        choice();
    }
}
void calculator::quoteint()
{
    if (a > b)
    {
        cout << "Quoteint is = " << a / b << endl;
        choice();
    }
    else if (a < b)
    {
        cout << "Quoteint is = " << b / a << endl;
        choice();
    }
}