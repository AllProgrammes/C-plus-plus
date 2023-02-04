#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter the value of n : ";
  cin >> n;
  if (n < 0)
  {
    cout << "Absolute value of " << n << " is -> " << n * (-1);
  }
  else
  {
    cout << "Absolute value of " << n << " is -> " << n;
  }
  return 0;
}