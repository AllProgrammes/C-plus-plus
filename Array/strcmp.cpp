#include <iostream>
using namespace std;
int str_len(char *str)
{
  int trigger = 0;
  while (str[trigger] != '\0')
  {
    trigger++;
  }
  return (trigger - 1);
}
int str_cmp(char *str1, char *str2)
{
  int count = 0;
  for (int i = 0; i <= str_len(str1); i++)
  {
    if ((int(str1[i]) - int(str2[i])) != 0)
    {
      count++;
    }
  }
  return count;
}
int main()
{
  char str1[100], str2[100];

  cout << "Enter the word in str1 : ";
  gets(str1);
  cout << "Enter the word in str2 : ";
  gets(str2);

  cout << "Difference is " << str_cmp(str1, str2) << endl;
  return 0;
}