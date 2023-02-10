#include <iostream>
using namespace std;
void area_circumfernce(float radius)
{
  cout << "Area of the circle with radius " << radius << " is " << radius * radius * 3.14 << " and circumference is " << 2 * 3.14 * radius;
}
int main()
{
  float radius;
  cout << "Enter the radius of the cirle : ";
  cin >> radius;
  area_circumfernce(radius);
  return 0;
}