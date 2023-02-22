#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter the size of your array : ";
  cin >> n;
  int arr[n];

  for (int &element : arr)
  {
    cin >> element;
  }

  for (int element : arr)
  {
    cout << element << endl;
  }
  return 0;
}