#include <iostream>
using namespace std;
// Write a program to calculate the sum of the first and the second last digit of a 5 digit number.
int main()
{
  int a;
  cout << "Enter any 5 digit number : ";
  cin >> a;
  int temp = a;
  int fifth = a % 10;
  a = a / 10;

  int fourth = a % 10;
  a = a / 10;

  int third = a % 10;
  a = a / 10;

  int second = a % 10;
  a = a / 10;

  int first = a % 10;
  a = a / 10;

  cout << "the sum of the first and the second last digit of " << temp << " is " << fourth + first;
  return 0;
}