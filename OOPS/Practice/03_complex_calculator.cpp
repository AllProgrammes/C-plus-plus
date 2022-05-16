#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
//-------------------------------------------------------------SIMPLE CALCULATOR-----------------------------------------------------//
class simple_calculator
{
protected:
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
            setdata_simple();
        }
        else
            exit(0);
    }
    void setdata_simple()
    {
        int choice;
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
            setdata_simple();
            break;
        }
    }
};

//-------------------------------------------------------SCIENTIFIC CALCULATOR-----------------------------------------------------//
class scientific_calculator
{
protected:
    float a, b;
    void square_root();
    void percentage();
    void power();
    void pie();
    void cos_value();
    void sin_value();
    void tan_value();
    void exp_value();
    void log_value();
    void log10_value();
    void cubic_root();

public:
    char option;
    void choice()
    {
        cout << "Want to continue ? If yes then enter Y/y , else press any key to exit\n";
        cin >> option;
        if (option == 'Y' || option == 'y')
        {
            setdata_scientific();
        }
        else
            exit(0);
    }
    void setdata_scientific()
    {
        int choice;
        cout << "\nWhat do you want to do ?\n1. Power\n2. Square Root\n3. Percentage\n4. Pi\n5. Cos \n6. Sin \n7. Tan\n8. Exp\n9. Log\n10. Log10\n11. Cubic Root"
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
        case 8:
            exp_value();
        case 9:
            log_value();
        case 10:
            log10_value();
        case 11:
            cubic_root();
        default:
            cout << "Please enter a correct index !" << endl;
            setdata_scientific();
            break;
        }
    }
};
//------------------------------------------------------MULTIPLE LEVEL INHERITANCE------------------------------------------------//
class combine : public simple_calculator, public scientific_calculator
{
public:
    int start;
    combine()
    {
        cout << "What type of calculator do you want ?\n\n1. Simple Calculator\n2. Scietific Calculator\n\nEnter the index value below : ";
        cin >> start;
        if (start == 1)
        {
            setdata_simple();
        }
        else if (start == 2)
        {
            setdata_scientific();
        }
        else
        {
            cout << "Enter a valid choice !! ";
            combine();
        }
    }
};

//-----------------------------------------------------------MAIN FUNCTION---------------------------------------------------------//
int main()
{
    combine data;
    return 0;
}
//--------------------------------------------BELOW ARE THE FUNCTIONS USED IN THE ABOVE CLASSES---------------------------------------//
void scientific_calculator::square_root()
{
    cout << "Enter the number : ";
    cin >> a;
    cout << "Sqaure root of " << a << " is " << sqrt(a) << endl;
    choice();
}
void scientific_calculator::cubic_root()
{
    cout << "Enter the number : ";
    cin >> a;
    cout << "Cubic root of " << a << " is " << cbrt(a) << endl;
    choice();
}
void scientific_calculator::percentage()
{
    cout << "Enter the numerator value of the fraction : ";
    cin >> a;
    cout << "Enter the denominator value of the fraction : ";
    cin >> b;
    cout << a << " is " << ((a / b) * 100) << "% of " << b << endl;
    choice();
}
void scientific_calculator::power()
{
    cout << "Enter the number : ";
    cin >> a;
    cout << "Enter the exponential power of this number : ";
    cin >> b;
    cout << "The real value of this number is " << pow(a, b) << endl;
    choice();
}
void scientific_calculator::pie()
{
    cout << "Enter the number : ";
    cin >> a;
    cout << "The value of " << a << "pi is " << a * 3.14 << endl;
}
void scientific_calculator::cos_value()
{
    cout << "Enter the number : ";
    cin >> a;
    cout << "The value of cos(" << a << ")"
         << " is ->> " << cos(a) << endl;
    choice();
}
void scientific_calculator::sin_value()
{
    cout << "Enter the number : ";
    cin >> a;
    cout << "The value of sin(" << a << ")"
         << " is ->> " << sin(a) << endl;
    choice();
}
void scientific_calculator::tan_value()
{
    cout << "Enter the number : ";
    cin >> a;
    cout << "The value of tan(" << a << ")"
         << " is ->> " << tan(a) << endl;
    choice();
}
void scientific_calculator::exp_value()
{
    cout << "Enter the number : ";
    cin >> a;
    cout << "The value of exp(" << a << ")"
         << " is ->> " << exp(a) << endl;
    choice();
}
void scientific_calculator::log10_value()
{
    cout << "Enter the number : ";
    cin >> a;
    cout << "The value of log10(" << a << ")"
         << " is ->> " << log10(a) << endl;
    choice();
}
void scientific_calculator::log_value()
{
    cout << "Enter the number : ";
    cin >> a;
    cout << "The value of log(" << a << ")"
         << "with base 10 is ->> " << log(a) << endl;
    choice();
}
void simple_calculator::sum()
{
    cout << "Enter num1 : ";
    cin >> a;
    cout << "Enter num2 : ";
    cin >> b;
    cout << "Sum is = " << a + b << endl;
    choice();
}
void simple_calculator::product()
{
    cout << "Enter num1 : ";
    cin >> a;
    cout << "Enter num2 : ";
    cin >> b;
    cout << "Product is = " << a * b << endl;
    choice();
}
void simple_calculator::difference()
{
    cout << "Enter num1 : ";
    cin >> a;
    cout << "Enter num2 : ";
    cin >> b;
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
void simple_calculator::quoteint()
{
    cout << "Enter num1 : ";
    cin >> a;
    cout << "Enter num2 : ";
    cin >> b;
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