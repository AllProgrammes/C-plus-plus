#include <iostream>
using namespace std;

int main()
{
  int arr[5];
  for (int i = 0; i < 5; i++)
  {
    cout << "Enter the value at index " << i << " : ";
    cin >> arr[i];
  }
  int new_number, index;
  cout << "Enter the index value in which u want to add your new number : ";
  cin >> index;
  cout << "Enter the number : ";
  cin >> new_number;
  for (int i = 4; i >= index; i--)
  {
    int temp = arr[i - 1];
    arr[i] = temp;
  }
  arr[index] = new_number;
  for (int i = 0; i < 5; i++)
  {
    cout << arr[i] << endl;
  }

  return 0;
}