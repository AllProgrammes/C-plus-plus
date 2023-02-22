#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter the size of your array : ";
  cin >> n;
  int arr[n];
  // cout << "Size of the array " << sizeof(arr) << " and length is " << sizeof(arr) / sizeof(int);
  for (int i = 0; i < n; i++)
  {
    cout << "Enter the value in arr[" << i << "] : ";
    cin >> arr[i];
  }
  return 0;
}