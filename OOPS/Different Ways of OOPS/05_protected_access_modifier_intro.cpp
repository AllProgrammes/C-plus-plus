#include <iostream>
using namespace std;
class master_class
{
protected:
    int data1;

private:
    int data2;
};
class derived_class : public master_class
{
    // private also remained private i.e data2 -> we cant access [data1] here in this derived class
    // protected remained protected i.e data1 but got inherited
    // and we can't access both data1 and data2 publically LOL so whats the use ? use is protected members can be inherited unlike private members
public:
    void data()
    {
        data1 = 10;
        cout << data1;
    }
};
int main()
{
    derived_class data;
    data.data(); // we can niether call data1 nor data2 as they are private
    return 0;
}