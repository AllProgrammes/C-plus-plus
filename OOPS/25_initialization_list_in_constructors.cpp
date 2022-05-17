#include <iostream>
using namespace std;
class test
{
    int a, b;

public:
    /* Cases:-
     1.  test(int x, int y) : a(x), b(y) { cout << "The value of a is " << a << " and the value of b is " << b << endl; }
      prints this -->> The value of a is 6 and the value of b is 8
     2.  test(int x, int y) : a(x), b(y + x) { cout << "The value of a is " << a << " and the value of b is " << b << endl; }
       prints this -->> The value of a is 6 and the value of b is 14
     3.  test(int x, int y) : b(x), a(b + 0) { cout << "The value of a is " << a << " and the value of b is " << b << endl; } // RED FLAG
    // prints this -->> The value of a is 4201019 and the value of b is 6 [b shows garbage value because a is intitialized first and then b,but if we init b first then a then the value will become right]
    */
    test(int x, int y) : a(x), b(a + 0) { cout << "The value of a is " << a << " and the value of b is " << b << endl; }
    // prints this -->> The value of a is 6 and the value of b is 6
};
int main()
{
    test data(6, 8);
    return 0;
}