#include <iostream>
using namespace std;

int main()
{
  cout << "\nSize of fundamental data types :\n";
  cout << " The sizeof(char) : " << sizeof(char) << " bytes \n";
  cout << " The sizeof(short) : " << sizeof(short) << " bytes \n";
  cout << " The sizeof(int) : " << sizeof(int) << " bytes \n";
  cout << " The sizeof(long): " << sizeof(long) << " bytes \n";
  cout << " The sizeof(long long) :" << sizeof(long long) << " bytes \n";
  cout << " The sizeof(float) :" << sizeof(float) << " bytes \n";
  cout << " The sizeof(double) :" << sizeof(double) << " bytes \n";
  cout << " The sizeof(long double) :" << sizeof(long double) << " bytes \n";
  cout << " The sizeof(bool) : " << sizeof(bool) << " bytes \n\n";
  return 0;
}