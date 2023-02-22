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
  int number, index;
  char choice;
  cout << "Enter the element value which u want to delete : ";
  cin >> number;
  for (int i = 0; i < 5; i++)
  {
    if (arr[i] == number)
    {
      index = i;
      cout << number << " is present at index " << i << endl;
      cout << "Press x to continue the deletion process or press any key to continue : ";
      cin >> choice;
      if (choice == 'x')
      {
        for (int i = index; i < 5; i++)
        {
          int temp = arr[i + 1];
          arr[i] = temp;
        }
        arr[4] = 0;
        cout << "Successfully deleted the element" << endl;
        break;
      }
      break;
    }
  }
  for (int i = 0; i < 5; i++)
  {
    cout << arr[i] << endl;
  }
  return 0;
}