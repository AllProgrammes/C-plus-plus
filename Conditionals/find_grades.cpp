#include <iostream>
using namespace std;

int main()
{
  float marks;
  cout << "Enter your percentage : ";
  cin >> marks;
  if (90 < marks && marks <= 100)
  {
    cout << "Your grade is A+";
  }
  else if (80 < marks && marks <= 90)
  {
    cout << "Your grade is A";
  }
  else if (70 < marks && marks <= 80)
  {
    cout << "Your grade is B+";
  }
  else if (60 < marks && marks <= 70)
  {
    cout << "Your grade is B";
  }
  else if (50 < marks && marks <= 60)
  {
    cout << "Your grade is C";
  }
  else if (40 < marks && marks <= 50)
  {
    cout << "Your grade is D";
  }
  else if (30 < marks && marks <= 40)
  {
    cout << "Your grade is E";
  }
  else if (0 <= marks && marks <= 30)
  {
    cout << "Your grade is F";
  }
  else
  {
    cout << "Please check the value you entered !! and try again ";
  }
  return 0;
}