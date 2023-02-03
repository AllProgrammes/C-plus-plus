#include <iostream>
using namespace std;
// Write a program to calculate the sum of the 3 digit number.
int main()
{
  int a;
  cout << "Enter any 3 digit number : ";
  cin >> a;

  int temp = a;

  int third = a % 10;
  a = a / 10;

  int second = a % 10;
  a = a / 10;

  int first = a % 10;
  a = a / 10;

  cout << "The sum of the first and the second last digit of " << temp << " is " << third + second + first;
  return 0;
}