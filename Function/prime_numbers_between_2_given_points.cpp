#include <iostream>
using namespace std;
int check_for_prime(int);
void print_prime(int, int);

void print_prime(int a, int b)
{
  for (int i = a; i < b; i++)
  {
    if (check_for_prime(i) == 1)
    {
      cout << i << endl;
    }
  }
}
int check_for_prime(int a)
{
  for (int n = 2; n <= (a / 2); n++)
  {
    if (a % n == 0)
    {
      return 0; // not prime
    }
  }
  return 1; // prime
}
int main()
{
  int a, b;
  cout << "Enter the first number : ";
  cin >> a;
  cout << "Enter the second number : ";
  cin >> b;
  print_prime(a, b);
  return 0;
}