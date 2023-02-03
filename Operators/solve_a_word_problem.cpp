#include <iostream>
using namespace std;
/* There are 45 total pupils in the class, 25 of whom are boys. Write a program to find how many girls
received grades "A" if 17 boys made up 80 % of the students that received grades "A".*/
int main()
{
  int total_students = 45;
  int boys = 25, girls = 45 - boys; // 20
  int total_a_grade_students = (17 * 100) / 80;
  int total_a_grade_boys = 17;
  cout << "Girls who got A grade is " << total_a_grade_students - total_a_grade_boys;
  return 0;
}