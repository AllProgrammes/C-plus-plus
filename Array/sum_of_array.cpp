#include <iostream>
using namespace std;

int main()
{
  int n, sum = 0;
  cout << "Enter the size of the array : ";
  cin >> n;
  int arr[n];
  for (int &element : arr)
  {
    cin >> element;
  }
  for (int element : arr)
  {
    sum += element;
  }
  cout << "Sum = " << sum << endl;
  return 0;
}