// REQUIRED OUTPUT:-
//  *****
//   ****
//    ***
//     **
//      *
#include <iostream>
using namespace std;
int main()
{
    for (int row = 0; row < 5; row++)
    {
        for (int space = 1; space <= row; space++)
        {
            cout << "  ";
        }
        for (int col = 0; col < (5 - row); col++)
        {
            cout << "x ";
        }
        cout << endl;
    }

    return 0;
}
// again i am not saying that this is the only way of doing this
// do search on internet/try urself for doing this programme in any other way