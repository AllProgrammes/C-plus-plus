#include <iostream>
using namespace std;
int days_counter(int starter_year, int ending_year)
{
  int number_of_days = 0;
  for (int i = starter_year; i < ending_year; i++)
  {
    if (i % 4 == 0)
    {
      number_of_days += 366;
    }
    else
    {
      number_of_days += 365;
    }
  }
  return number_of_days;
}
int days_counter(int year, int month, int date)
{
  int number_of_days = 0;
  for (int i = 1; i < month; i++)
  {
    if (i == 2) // counting the number of days in february of that particular year
    {
      if (year % 4 == 0)
      {
        number_of_days += 29;
      }
      else
      {
        number_of_days += 28;
      }
      continue;
    }

    else if (i % 2 != 0) // targets the odd number of months
    {
      if (i <= 7)
      {
        number_of_days += 31; // covers january,march,may,july
      }
      else
      {
        number_of_days += 30; // september,november
      }
    }
    else
    {
      if (i <= 6)
      {
        number_of_days += 30; // april,june
      }
      else
      {
        number_of_days += 31; // august,october,december
      }
    }
  }
  return (number_of_days + date);
}
int main()
{
  int dob_y, dob_m, dob_d, curr_y, curr_m, curr_d;
  char temp = 'x';
  cout << "\n\n                  .................................                  " << endl;
  cout << "                  ..                             ..                  " << endl;
  cout << ".................... WELCOME TO DAYS CALCULATOR  ...................." << endl;
  cout << "                  ..                             ..                  " << endl;
  cout << "                  .................................                  \n\n"
       << endl;
  cout << "I will tell you how many days you managed to survive on this planet !!\n\n"
       << endl;
  do
  {
    cout << "Enter the D.O.B in DD MM YYYY format : ";
    cin >> dob_d >> dob_m >> dob_y;
    cout << "Enter today's date in DD MM YYYY format : ";
    cin >> curr_d >> curr_m >> curr_y;
    if ((dob_y > curr_y) || (dob_m > 12) || (dob_m < 1) || (curr_m > 12) || (curr_m < 1) || (dob_d > 31) || (dob_d < 1) || (curr_d > 31) || (curr_d < 1))
    {
      cout << "\nAre you high ?\n"
           << endl;
      continue;
    }
    else
    {
      int days_lived = days_counter(dob_y, curr_y) + days_counter(curr_y, curr_m, curr_d) - days_counter(dob_y, dob_m, dob_d);
      cout << "\nKudos !! You managed to survive " << days_lived << " days on this planet :) " << endl;
      cout << "\n\n\nPress x to continue or press any key to exit : ";
      cin >> temp;
    }
  } while (temp == 'x' || temp == 'X');
  cout << "\n\n-------> Thanks for using this program" << endl;
  cout << "-------> Have a nice day :)\n"
       << endl;
  return 0;
}