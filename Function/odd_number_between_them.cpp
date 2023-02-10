#include <iostream>
using namespace std;

void print_odd_numbers(int a, int b)
{
  for (int i = a; i < b; i++)
  {
    if (i % 2 != 0)
    {
      cout << i << endl;
    }
  }
}
int main()
{
  int a, b;
  cout << "Enter the first number : ";
  cin >> a;
  cout << "Enter the second number : ";
  cin >> b;
  print_odd_numbers(a, b);
  return 0;
}