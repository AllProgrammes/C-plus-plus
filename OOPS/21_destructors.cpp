#include <iostream>
using namespace std;
class num
{
public:
    static int count; // made static variable
    num()
    {
        count++;
        cout << "This is the time when constructor is being called with count " << count << endl;
    }
    ~num()
    {
        cout << "This is the time when destructor is being called with count " << count << endl;
        count--;
    }
};
int num::count = 0; // init the counter value
int main()
{
    cout << "Starting...\nEntering int main()\nmaking a object with name 'num1'" << endl;
    num num1;
    {
        cout << "Entering Area 51\nMaking 2 more objects with name 'num2' and 'num3'" << endl;
        num num2, num3;
        cout << "Done !!\nNow leaving Area 51 because of alien invasion" << endl;
    }
    cout << "Successfully moved out of Area 51 and came back to main block\nNow Going Home" << endl;
    return 0;
}