#include <iostream>
using namespace std;

void real_swap(int &x, int &y)
{
  int temp = x;
  x = y;
  y = temp;
}

int main()
{
  int a, b;
  cout << "Enter the first number : ";
  cin >> a;
  cout << "Enter the second number : ";
  cin >> b;
  cout << "Before " << a << endl;
  real_swap(a, b);
  cout << "After " << a << endl;
  return 0;
}