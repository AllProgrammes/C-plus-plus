#include <iostream>
using namespace std;

int main()
{
  int a, b;
  cout
      << "Enter the value of a : ";
  cin >> a;
  cout << "Enter the value of b : ";
  cin >> b;
  int value = 1;
  for (int i = 1; i <= b; i++)
  {
    value *= a;
  }
  cout << a << " raised to " << b << " is " << value;
  return 0;
}