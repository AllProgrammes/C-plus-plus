#include <iostream>
using namespace std;

int main()
{
  int number, digit = 0;
  cout << "Enter the number : ";
  cin >> number;
  while (number != 0)
  {
    number = number / 10;
    digit++;
  }
  cout << "Number of digits in your number is " << digit;
  return 0;
}