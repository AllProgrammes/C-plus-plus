#include <iostream>
using namespace std;

int main()
{
  float num1, num2;
  cout << "Enter the first number : ";
  cin >> num1;
  cout << "Enter the second number : ";
  cin >> num2;
  int option;
  cout << "\n\nSo what you wanna do ?\nEnter 1 for Additon\nEnter 2 for Substraction\nEnter 3 for Division\nEnter 4 for Multiplication" << endl;
  cin >> option;
  switch (option)
  {
  case 1:
    cout << "\nSum is " << num1 + num2;
    break;
  case 2:
    cout << "\nDifference is " << num1 - num2;
    break;
  case 3:
    cout << "\nQuotient is " << num1 / num2;
    break;
  case 4:
    cout << "\nProduct is " << num1 * num2;
    break;

  default:
    break;
  }
  return 0;
}