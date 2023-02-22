#include <iostream>
using namespace std;
int main()
{
  int size;
  cout << "Enter the size of the array : ";
  cin >> size;

  int arr[size];
  char choice;

  for (int i = 0; i < size; i++)
  {
    cout << "Enter the value in index " << i << " : ";
    cin >> arr[i];
    cout << "Press 'x' to exit else press any key to continue : ";
    cin >> choice;
    if (choice == 'x')
    {
      for (int j = i + 1; j < size; j++)
      {
        arr[j] = -69;
      }
      break;
    }
  }

  for (int i = 0; i < size; i++)
  {
    if (arr[i] == -69)
    {
      cout << "Free" << endl;
    }
    else
    {
      cout << arr[i] << endl;
    }
  }
  return 0;
}