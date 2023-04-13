/*
This is one of the type of function operator
1. call by value (passing copy of the variables)
2. call by address -> & &
3. call by reference -> a,b
 */
#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}
int main()
{
  int a, b;
  int *n1, *n2;
  cout << "Enter the value of a : ";
  cin >> a;
  cout << "Enter the value of b : ";
  cin >> b;
  swap(&a, &b);
  cout << "Value of a is " << a << " and b is " << b << endl;
  return 0;
}