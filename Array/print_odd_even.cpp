#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter the size of your array : ";
  cin >> n;
  int arr[n], even = 0, odd = 0;
  for (int i = 0; i < n; i++)
  {
    cout << "Enter the value in arr[" << i << "] : ";
    cin >> arr[i];
  }
  for (int i = 0; i < n; i++)
  {
    if (arr[i] % 2 != 0)
    {
      odd++;
    }
    else
    {
      even++;
    }
  }
  cout << "Number of even numbers is " << even << " and odd numbers is " << odd << endl;
  return 0;
}