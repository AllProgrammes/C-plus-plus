#include <iostream>
using namespace std;

int main()
{
  int length, breadth;
  cout << "Enter the length : ";
  cin >> length;
  cout << "Enter the breadth : ";
  cin >> breadth;
  if (length == breadth)
  {
    cout << "This is a square !!";
  }
  else
  {
    cout << "This is not a square !!";
  }
  return 0;
}