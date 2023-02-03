#include <iostream>
using namespace std;

int main()
{
  int a, b;
  cout << "Enter the first number : ";
  cin >> a;
  cout << "Enter the second number : ";
  cin >> b;
  cout << (a == b) ? "Equal" : "Not Equal";
  return 0;
}