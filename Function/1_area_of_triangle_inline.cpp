#include <iostream>
using namespace std;
inline int area_of_triangle(float base, float height);
inline int area_of_triangle(float base, float height)
{
  return (0.5 * base * height);
}
int main()
{
  float base, height;
  cout << "Enter the base and height : ";
  cin >> base >> height;
  cout << "Area to triagle is : " << area_of_triangle(base, height) << " sq cm ";
  return 0;
}