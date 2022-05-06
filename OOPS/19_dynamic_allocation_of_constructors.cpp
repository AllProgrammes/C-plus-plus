#include <iostream>
using namespace std;
class bank_deposits
{
    int principal;
    int years;
    float rate;
    float return_value;

public:
    bank_deposits() {}                    // made a null constructor
    bank_deposits(int p, int y, float r); // made a constructor which takes 2 int values and 1 float value
    bank_deposits(int p, int y, int r);   // made constructor whic takes 3 integer values
    void display();                       // simple AF function to display stuff
};
void bank_deposits::display() // why I made it outside ? Ans : I just wanted to flex XD
{
    cout << "After " << years << " years , Your amount of Rs " << principal << " is now Rs " << return_value << endl;
}
bank_deposits::bank_deposits(int p, int y, float r)
{
    principal = p;
    years = y;
    rate = r;
    return_value = principal;
    for (int i = 1; i <= y; i++)
    {
        return_value = return_value * (1 + r); // compound interest stuff
    }
}
bank_deposits::bank_deposits(int p, int y, int r)
{
    principal = p;
    years = y;
    rate = float(r) / 100;
    return_value = principal;
    for (int i = 1; i <= y; i++)
    {
        return_value = return_value * (1 + rate);
        /*lets say you have 100 bucks now and you kept it in a bank and bank is giving 4% interest rate on it
        and then p = 100 then y = 1 then rate = 4%

        1st loop
        return_value = 100 * (1+ (4/100))
        2st loop
        return_value = 104 * (1+ (4/100))*/
    }
}
int main()
{
    int principal, years;
    float rate;
    cout << "Enter the principal amount : ";
    cin >> principal;
    cout << "Enter the number of years : ";
    cin >> years;
    cout << "Enter the interest rate : ";
    cin >> rate;
    if (rate >= 1)
    {
        int frate = int(rate);                        // if user enters the interest rate directly then it will take it as a int value and proccess as per that
        bank_deposits user1(principal, years, frate); // passed the required values to the constructor function
        user1.display();
        exit(0);
    }
    else
    {
        bank_deposits user1(principal, years, rate);
        user1.display();
    }

    return 0;
}