#include <iostream>
using namespace std;

int main()
{
  int row;
  cin >> row;
  for (int i = 1; i <= row; i++)
  {
    for (int j = 1; j <= (row - i); j++)
    {
      cout << ' ';
    }
    for (int j = 1; j <= i; j++)
    {
      cout << j;
    }
    for (int j = (i - 1); j >= 1; j--)
    {
      cout << j;
    }

    cout << endl;
  }

  return 0;
}