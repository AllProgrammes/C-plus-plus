#include <iostream>
using namespace std;

int main()
{
  int number;
  cout << "Enter the number : ";
  cin >> number;
  if (number < 0)
  {
    cout << "The number is skipped as it is negetive";
  }
  else
  {
    cout << number;
  }
  return 0;
}