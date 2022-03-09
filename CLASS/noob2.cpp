#include <iostream>
using namespace std;
class name
{
protected:
    void hemlo()
    {
        cout << "HEMLO WORLD !\n";
    }

private:
    int a;
    void input()
    {
        hemlo();
        cout << "enter a number : ";
        cin >> a;
    }
    void show()
    {
        cout << a << endl;
    }

public:
    void hello()
    {
        input();
        show();
    }
};
int main()
{
    name n, n1;
    n.hello();
    n1.hello();
    return 0;
}