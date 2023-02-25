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
void str_cat(char *str1, char *str2)
{
  for (int i = 0, index = (str_len(str1) + 1); i <= str_len(str2); i++, index++)
  {
    str1[index] = str2[i];
  }
}
int main()
{
  char str1[100], str2[100];
  cout << "Enter the word in str1 : ";
  gets(str1);
  cout << "Enter the word in str2 : ";
  gets(str2);
  str_cat(str1, str2);
  for (int i = 0; i <= str_len(str1); i++)
  {
    cout << str1[i];
  }

  return 0;
}