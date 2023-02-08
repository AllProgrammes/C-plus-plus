#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= (n - i); j++)
    {
      cout << " ";
    }
    if (i == 1)
    {
      for (int j = 1; j <= i; j++)
      {
        cout << i;
      }
    }
    else if (i == n)
    {
      for (int j = 1; j <= (i + 3); j++)
      {
        cout << i;
      }
    }
    else
    {
      for (int j = 1; j <= 2; j++)
      {
        cout << i;
        for (int k = 1; k < ((2 * i) - 1); k++)
        {
          cout << " ";
        }
      }
    }
    cout << endl;
  }

  return 0;
}