#include <iostream>
using namespace std;
class Room
{
public:
    int a, b;
    int cal()
    {
        int area = 0;
        area = a * b;
        return area;
    }
};
int main()
{
    Room r;
    cout << "Enter the length and breadth of the rectangle : ";
    cin >> r.a >> r.b;
    cout << "Area = " << r.cal();
    return 0;
}