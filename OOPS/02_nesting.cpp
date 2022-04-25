#include <iostream>
using namespace std;
class binary
{
    // private:  by default things outside any class type is private
    string number;
    void change();

public:
    void take();
    void check_num();
    void display();
};
void binary ::display()
{
    cout << "The number is " << number << endl;
}
void binary ::take()
{
    cout << "Enter the binary number : ";
    cin >> number;
}
void binary::change()
{
    cout << "Found a binary number \nChanging the number , Please wait....\n";
    for (int i = 0; i < number.length(); i++)
    {
        if (number.at(i) == '0')
        {
            number.at(i) = '1';
        }
        else if (number.at(i) == '1')
        {
            number.at(i) = '0';
        }
    }
    display();
}
void binary::check_num()
{
    for (int i = 0; i < number.length(); i++)
    {
        if (number.at(i) != '0' && number.at(i) != '1')
        {
            cout << "This is not a binary number.\nPlease enter a binary number and try again !!" << endl;
            exit(0);
        }
        else
        {
            change();
            exit(0);
        }
    }
}
int main()
{
    binary data;
    data.take();
    data.display();
    data.check_num();
    // I included these extra fucntion calls in check_num fucntion that is called Nesting.
    // data.change(); we can't call this fucntion now because I made this fucntions private. Now only class fucntion can only calll this functions
    // data.display();
    return 0;
}