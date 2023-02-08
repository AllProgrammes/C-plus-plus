#include <iostream>
using namespace std;

int main()
{
  int number, digit, reverse = 0;
  cout << "Enter the number : ";
  cin >> number;
  while (number != 0)
  {
    digit = number % 10;
    reverse = reverse * 10 + digit;
    number = number / 10;
  }
  cout << "After reversing number is " << reverse;
  return 0;
}