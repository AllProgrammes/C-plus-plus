#include <iostream>
using namespace std;
int main()
{
    for (int row = 5; row > 0; row--)
    {
        for (int col = 0; col < row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
// OUTPUT :-

// *****
// ****
// ***
// **
// *