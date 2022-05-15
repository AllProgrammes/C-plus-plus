#include <iostream>
using namespace std;
class student
{
protected:
    string name;
    int hindi, english, sst, maths, pe;
};
class test : virtual public student
{
public:
    void settest()
    {
        cout << "Enter your name : ";
        cin >> name;
        fflush(stdin);
        cout << "Enter your hindi marks : ";
        cin >> hindi;
        cout << "Enter your english marks : ";
        cin >> english;
        cout << "Enter your sst marks : ";
        cin >> sst;
        cout << "Enter your maths marks : ";
        cin >> maths;
    }
};
class sports : virtual public student
{
public:
    void setsports()
    {
        cout << "Enter yout P.E marks : ";
        cin >> pe;
    }
};
class results : public sports, public test
{
public:
    results()
    {
        settest();
        setsports();
        show_results();
    }
    void show_results()
    {
        cout << "\n\nHello " << name << " !" << endl;
        cout << "Your have scored " << (hindi + english + sst + maths + pe) / 5 << "% overall" << endl;
    }
};
int main()
{
    results Biswajit;
    return 0;
}