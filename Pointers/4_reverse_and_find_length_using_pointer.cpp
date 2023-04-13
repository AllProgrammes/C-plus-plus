#include <iostream>
using namespace std;

// function declaration
void str_rev(string *str);
int str_len(string *str);

// writing function content
int str_len(string *str)
{
  int trigger = 0;
  while ((*str)[trigger] != '\0')
  {
    trigger++;
  }

  return trigger;
}

// writing function content
void str_rev(string *str)
{
  int length = str_len(str) - 1; // storing the length of the string using my function str_len
  // reversing of the string
  for (int i = 0; i <= length / 2; i++)
  {
    char temp = (*str)[length - i]; // storing V in temp
    (*str)[length - i] = (*str)[i]; // assigning G into the last place
    (*str)[i] = temp;
  }
}

int main()
{
  string str;
  cout << "Enter the string : ";
  getline(cin, str);
  str_rev(&str);
  cout << "After reversing the string = " << str << "\nLength of this string is " << str_len(&str) << endl;
  return 0;
}