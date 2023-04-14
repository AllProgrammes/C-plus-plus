#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter the number of names you want to enter : ";
  cin >> n;

  string name[n];
  int first_letter[n];
  int index[n];

  for (int i = 0; i < n; i++)
  {
    cout << "Enter name of person " << i + 1 << " : ";
    cin >> name[i];
    first_letter[i] = name[i][0];
    index[i] = i;
  }

  // bubble sort algorithm
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - 1 - i; j++)
    {
      if (first_letter[j] > first_letter[j + 1])
      {
        int temp = first_letter[j];
        int tempo = index[j];

        first_letter[j] = first_letter[j + 1];
        index[j] = index[j + 1];

        first_letter[j + 1] = temp;
        index[j + 1] = tempo;
      }
    }
  }
  cout << "\nAfter sorting the names here is the list :-" << endl;
  for (int i = 0; i < n; i++)
  {
    cout << i + 1 << ". " << name[index[i]] << endl;
  }
  return 0;
}