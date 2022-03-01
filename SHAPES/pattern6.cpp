// REQUIRED OUTPUT:-
//          *
//         **
//        ***
//       ****
//      *****
#include <iostream>
using namespace std;
int main()
{
    for (int row = 1; row <= 5; row++)
    {
        for (int space = 4; space >= row; space--)
        {
            cout << "  ";
        }
        for (int col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
// again i am not saying that this is the only way of doing this
// do search on internet/try urself for doing this programme in any other way