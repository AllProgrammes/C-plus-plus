#include <iostream>
using namespace std;

// Global Inline Declaration of the function
inline int fact(int n);
inline int fibb(int n);

// Fibbonacci Series
inline int fibb(int n)
{
  if (n <= 1)
  {
    return 0;
  }
  else if (n == 2)
  {
    return 1;
  }

  else
  {
    return (fibb(n - 1) + fibb(n - 2));
  }
}

// Factorial
inline int fact(int n)

{
  if (n <= 1)
  {
    return 1;
  }
  else
  {
    return fact(n - 1) * n;
  }
}
int main()
{
  int n;
  cout << "Enter the value of n : ";
  cin >> n;
  cout << "Factorial of " << n << " is " << fact(n) << endl;
  cout << "Fibonacci of " << n << " is " << fibb(n) << endl;
  return 0;
}