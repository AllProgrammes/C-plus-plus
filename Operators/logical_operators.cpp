#include <iostream>
using namespace std;

int main()
{
  bool exp1 = true;
  bool exp2 = false;
  cout << "exp1 && exp2 is " << (exp1 && exp2) << endl;
  cout << "exp1 || exp2 is " << (exp1 || exp2) << endl;
  cout << "!exp1 is " << (!exp1) << endl;
  cout << "!exp2 is " << (!exp2) << endl;
  return 0;
}