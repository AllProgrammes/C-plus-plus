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
void str_cpy(char *str2, char *str1)
{
  for (int i = 0; i <= str_len(str1); i++)
  {
    str2[i] = str1[i];
  }
  str2[(str_len(str1) + 1)] = '\0';
}
int main()
{
  char str1[100], str2[100];
  cout << "Enter the word in str1 : ";
  gets(str1);
  str_cpy(str2, str1);
  for (int i = 0; i <= str_len(str2); i++)
  {
    cout << str2[i];
  }
}