#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter the size of your array : ";
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cout << "Enter the value in arr[" << i << "] : ";
    cin >> arr[i];
  }
  int smallest = arr[0], greatest = 0;
  for (int i = 0; i < n; i++)
  {
    if (smallest > arr[i])
    {
      smallest = arr[i];
    }
    else if (greatest < arr[i])
    {
      greatest = arr[i];
    }
  }
  cout << "Sum of greatest [" << greatest << "] and smallest [" << smallest << "] number in your array is " << smallest + greatest;
  return 0;
}