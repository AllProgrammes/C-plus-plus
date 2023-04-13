#include <iostream>
using namespace std;
void reverse(int *number);
void reverse(int *number)
{
  int num_cpy = *number;
  int rev = 0;
  while (num_cpy != 0)
  {
    int digit = num_cpy % 10;
    rev = rev * 10 + digit;
    num_cpy /= 10;
  }
  *number = rev;
}
int main()
{
  int number;
  cout << "Enter the number : ";
  cin >> number;
  reverse(&number);
  cout << number << endl;
  return 0;
}