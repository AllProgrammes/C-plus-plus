#include <iostream>
using namespace std;
inline void check_for_prime(int number);
inline void check_for_prime(int number)
{
  int count = 0;
  for (int i = 2; i < number; i++)
  {
    if (number % i == 0)
    {
      count++;
    }
  }
  if (count > 0)
  {
    cout << "Number is not prime !!" << endl;
  }
  else
  {
    cout << "Number is prime !!" << endl;
  }
}
int main()
{
  int number;
  cout << "Enter the number : ";
  cin >> number;
  check_for_prime(number);
  return 0;
}