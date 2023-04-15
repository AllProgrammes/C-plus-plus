#include <iostream>
using namespace std;
static int count = 1;
class timee
{
  int hh, mm, ss;

public:
  void assign()
  {
    cout << "\nEnter the time" << count << " in hh mm ss format:\nhh = ";
    cin >> hh;
    cout << "mm = ";
    cin >> mm;
    cout << "ss = ";
    cin >> ss;
    count++;
    if (ss > 60)
    {
      int tc = ss / 60;
      int tcc = ss % 60;
      ss = tcc;
      mm = mm + tc;
    }
    if (mm > 60)
    {
      int tm = mm / 60;
      int tmm = mm % 60;
      mm = tmm;
      hh = hh + tm;
    }
  }
  void assign_add(int a, int b, int c)
  {
    hh = a;
    mm = b;
    ss = c;
  }
  void display()
  {
    cout << endl
         << "The sum of both the time in hh mm ss format is: " << hh << ":" << mm << ":" << ss << endl;
  }
  timee add(timee b)
  {
    int aa = hh + b.hh;
    int bb = mm + b.mm;
    int cc = ss + b.ss;
    if (cc > 60)
    {
      int tc = cc / 60;
      int tcc = cc % 60;
      cc = tcc;
      bb = bb + tc;
    }
    if (bb > 60)
    {
      int tm = bb / 60;
      int tmm = bb % 60;
      bb = tmm;
      aa = aa + tm;
    }
    timee temp;
    temp.assign_add(aa, bb, cc);
    return temp;
  }
};

int main()
{
  timee o1;
  timee o2;
  o1.assign();
  o2.assign();
  timee o3 = o1.add(o2);
  o3.display();
}