#include <iostream>
using namespace std;
int lookup_function(int *arr, int n)
{
  int lookup;
  cout << "Enter the number you want to loop up for : ";
  cin >> lookup;
  for (int i = 0; i < n; i++)
  {
    if (lookup == arr[i])
    {
      cout << "Your element is present on index " << i << endl;
      return i;
    }
  }
  return -1;
}
int main()
{
  int n;
  cout << "Enter the size of the array : ";
  cin >> n;
  int arr[n];
  for (int &element : arr)
  {
    cin >> element;
  }
  cout << lookup_function(arr, n);
  return 0;
}