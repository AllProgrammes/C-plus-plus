#include <iostream>
using namespace std;

int main()
{
  int number, digit, sum = 0;
  cout << "Enter the number : ";
  cin >> number;
  while (number != 0)
  {
    digit = number % 10;
    sum += digit;
    number = number / 10;
  }
  cout << "Sum of digits is " << sum;
  return 0;
}