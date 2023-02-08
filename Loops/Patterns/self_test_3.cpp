#include <iostream>
using namespace std;

int main()
{
  int row, column;
  cout << "Enter the rows and columns : ";
  cin >> row >> column;
  for (int i = 1; i <= row; i++)
  {
    for (int j = i; j <= column; j++)
    {
      if (j % 2 != 0)
      {
        cout << 1;
      }
      else
      {
        cout << 2;
      }
    }
    for (int j = 1; j <= i - 1; j++)
    {
      if (j % 2 != 0)
      {
        cout << 1;
      }
      else
      {
        cout << 2;
      }
    }

    cout << endl;
  }

  return 0;
}