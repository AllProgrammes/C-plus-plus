#include <iostream>
using namespace std;

int main()
{
  int a = 5, b = 6;
  int temp = 0;
  cout << "The value of a is " << a << " and "
       << "value of b is " << b << endl;
  temp = a; // temp stores 5 here
  a = b;    // a stores 6 here
  b = temp; // b gets the value of a which was stores in temp
  cout << "The value of a is " << a << " and "
       << "value of b is " << b;
  return 0;
}