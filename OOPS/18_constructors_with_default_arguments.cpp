#include <iostream>
using namespace std;
class data
{
    int data1, data2;

public:
    data(int a, int b = 5)
    {
        data1 = a;
        data2 = b;
    }
    void getdata();
};
void data::getdata()
{
    cout << "The value of data are " << data1 << " and " << data2 << endl;
}
int main()
{
    data value1(2); // if we do this then it will use the default value of b i.e 5 in line 8
    value1.getdata();

    data value2(2, 10); // but if we give 2 integers then it will overwrite the existing value given
    value2.getdata();

    return 0;
}