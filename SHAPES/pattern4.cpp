#include <iostream>
using namespace std;
int main()
{
    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << col << " ";
        }
        cout << endl;
    }
    return 0;
}
// OUTPUT :-

// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
