#include <iostream>
using namespace std;

int main()
{
  int row;
  cin >> row;
  for (int i = row; i > 0; i--)
  {
    for (int j = i; j > 0; j--)
    {
      cout << "*";
    }
    cout << endl;
  }

  return 0;
}