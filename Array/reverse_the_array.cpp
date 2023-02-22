#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter the size of your array : ";
  cin >> n;
  int arr[n], temp;
  for (int i = 0; i < n; i++)
  {
    cout << "Enter the value in arr[" << i << "] : ";
    cin >> arr[i];
  }
  for (int i = 0, t = n; i < (n / 2); i++)
  {
    temp = arr[i];
    arr[i] = arr[t - 1];
    arr[t - 1] = temp;
    t--;
  }
  cout << "After reversing : " << endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << endl;
  }

  return 0;
}