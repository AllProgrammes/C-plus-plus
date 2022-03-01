// TO PRINT :-
//*
//**
//***
//****
//*****
//****
//***
//**
//*
#include <iostream>
using namespace std;
int main()
{
    for (int row = 1; row <= 4; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int col = 1; col <= 5; col++)
    {
        cout << "* ";
    }
    cout << endl;
    for (int row = 4; row >= 1; row--)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
// I am not saying that this is the only way of doing this.
// thier may be many other ways of doing it.