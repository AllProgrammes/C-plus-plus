#include <iostream>
using namespace std;

int main()
{
  int n, sum = 0;
  cout << "Enter the value n : ";
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    if (i % 2 == 0)
    {
      sum = sum - i;
    }
    else
    {
      sum = sum + i;
    }
  }
  cout << "Sum = " << sum;
  return 0;
}