#include <iostream>
using namespace std;

int main()
{
  float cp, sp;
  cout << "Enter the Cost Price : ";
  cin >> cp;
  cout << "Enter the Selling Price : ";
  cin >> sp;
  if (sp > cp)
  {
    cout << "Profit = " << sp - cp;
  }
  else
  {
    cout << "Loss = " << cp - sp;
  }
  return 0;
}