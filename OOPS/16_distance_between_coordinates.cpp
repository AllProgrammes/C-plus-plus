#include <iostream>
#include <math.h>
class co_ordinate2; // needed because at 13:45 of this program class co_ordinate1 don't know that if co_ordinate2 exists or not
using namespace std;

//-----------------CLASS 1---------------------------//
class co_ordinate1 // made class
{
    int x, y; // made 2 int variables

public:
    co_ordinate1(); // made constructor
    friend void compare(co_ordinate1 data1, co_ordinate2 data2);
};
co_ordinate1::co_ordinate1() //
{
    cout << "Enter the value of x1 : ";
    cin >> x;
    cout << "Enter the value of y1 : ";
    cin >> y;
}

//-----------------CLASS 2---------------------------//
class co_ordinate2 // made class
{
    int x, y; // made 2 int variables

public:
    co_ordinate2(); // made constructor
    friend void compare(co_ordinate1 data1, co_ordinate2 data2);
};
co_ordinate2::co_ordinate2() //
{
    cout << "Enter the value of x2 : ";
    cin >> x;
    cout << "Enter the value of y2 : ";
    cin >> y;
}

void compare(co_ordinate1 data1, co_ordinate2 data2) // made function which takes 2 class
{
    // float x, y, z;
    //  x = (data2.x - data1.x) * (data2.x - data1.x); // can be also written as --> x=pow((data2.x - data1.x),2);
    //  y = (data2.y - data1.y) * (data2.y - data1.y); // can be also written as --> y=pow((data2.y - data1.y),2);
    //  further it can be also written as below :-
    //  z = sqrt(pow((data2.x - data1.x), 2) + pow((data2.y - data1.y), 2)); ----->but this was giving very accurate value

    // So I breaked it into small parts x and y then did manually
    // x = pow((data2.x - data1.x), 2);
    // y = pow((data2.y - data1.y), 2);
    // z = hypot((data2.x - data1.x), (data2.y - data1.y));
    // z = sqrt(x + y); all became obsuolete LOL this fx does the work
    cout << "The distance between x and y co-ordinates is " << hypot((data2.x - data1.x), (data2.y - data1.y)) << endl;
}

int main()
{
    co_ordinate1 data1;
    co_ordinate2 data2;

    compare(data1, data2); // gave compare function data1 and data2 objects
    return 0;
}