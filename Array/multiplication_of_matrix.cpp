#include <iostream>
using namespace std;

int main()
{
  int r1, r2, r3, c1, c2, c3;
  cout << "Enter the size of the matrix 1 : ";
  cin >> r1 >> c1;
  cout << "Enter the size of the matrix 2 : ";
  cin >> r2 >> c2;
  int matrix_1[r1][c1], matrix_2[r2][c2], matrix_3[r1][c2];
  if (c1 == r2)
  {
    for (int i = 0; i < r1; i++)
    {
      for (int j = 0; j < c1; j++)
      {
        cout << "Enter the value in index " << i << j << " of matrix 1 : ";
        cin >> matrix_1[i][j];
      }
    }
    for (int i = 0; i < r2; i++)
    {
      for (int j = 0; j < c2; j++)
      {
        cout << "Enter the value in index " << i << j << " of matrix 2 : ";
        cin >> matrix_2[i][j];
      }
    }

    for (int i = 0; i < r1; i++)
    {
      for (int j = 0; j < c2; j++)
      {
        int temp = 0;
        for (int k = 0; k < c1; k++)
        {
          temp += matrix_1[i][k] * matrix_2[k][j];
        }
        matrix_3[i][j] = temp;
      }
    }
    for (int i = 0; i < r1; i++)
    {
      for (int j = 0; j < c2; j++)
      {
        cout << matrix_3[i][j] << "\t";
      }
      cout << "\n";
    }
  }
  else
  {
    cout << "Multiplication of these 2 matrix can't happen !!";
  }

  return 0;
}