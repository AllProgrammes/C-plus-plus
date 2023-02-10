#include <iostream>
using namespace std;

void check_age(float age)
{
  if (age >= 18)
  {
    cout << "Yes";
  }
  else
  {
    cout << "No";
  }
}

main()
{
  float age;
  cout << "Enter your age : ";
  cin >> age;
  check_age(age);
  return 0;
}