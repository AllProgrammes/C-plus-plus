#include <iostream>
using namespace std;
class shop
{
    int itemID[100];
    int itemPrice[100];
    int counter;

public:
    void set_counter();
    void getPrice();
    void setPrice();
    void init_counter() { counter = 0; }
};
void shop::set_counter()
{
}
void shop::setPrice()
{
    cout << "Enter the ID of Item " << counter + 1 << endl;
    cin >> itemID[counter];
    cout << "Enter the Price of Item " << counter + 1 << endl;
    cin >> itemPrice[counter];
    counter++;
}
void shop::getPrice()
{
    cout << "\n\t\t  INDEX PAGE\n\n"
         << endl;
    cout << "S No. "
         << "\t\tItem ID "
         << "\tItem Price (in Rs)" << endl;
    for (int i = 0; i < counter; i++)
    {
        cout << i << "\t\t  " << itemID[i] << "\t\t\t " << itemPrice[i] << endl;
    }
}
int main()
{
    int count;
    shop item_data;
    item_data.init_counter();
    cout << "Enter the total number of items in your shop : ";
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        item_data.setPrice();
    }
    item_data.getPrice();
    return 0;
}