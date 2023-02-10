#include <iostream>
using namespace std;
void sqaure_of_numbers(int n)
{
  for (int i = 1; i <= n; i++)
  {
    cout << i * i << endl;
  }
}
int main()
{
  int n;
  cout << "Enter the value of n : ";
  cin >> n;
  sqaure_of_numbers(n);
  return 0;
}