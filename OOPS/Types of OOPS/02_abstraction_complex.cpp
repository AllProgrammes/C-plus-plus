#include <iostream>
using namespace std;
void welcome();
class students
{
public:
    virtual void scholarship() = 0; // so that no one can use scholarship function via students class
};
class seniors : students // This my friend is called abstracion
{
    string name;
    int hindi, english, maths, science, sst;

public:               // public functions or data members
    static int index; // static variables declaration
    void setdata()    // class function
    {
        cout << "\nIndex " << index + 1 << endl;
        cout << "Enter his/her name : ";
        cin >> name;
        cout << "Enter his/her hindi marks : ";
        cin >> hindi;
        cout << "Enter his/her english marks : ";
        cin >> english;
        cout << "Enter his/her maths marks : ";
        cin >> maths;
        cout << "Enter his/her science marks : ";
        cin >> science;
        cout << "Enter his/her sst marks : ";
        cin >> sst;
        index++; // act as a counter
    }
    void getdata() // class function
    {
        cout << "\n"
             << name << " marks are follow :- \n"
             << "1. Hindi = " << hindi << endl
             << "2. English = " << english << endl
             << "3. Maths = " << maths << endl
             << "4. Science = " << science << endl
             << "5. SST = " << sst << endl;
    }
    void scholarship() // class function
    {
        float total_marks = hindi + english + maths + science + sst;
        if (total_marks >= 450)
        {
            if (hindi >= 95)
            {
                cout << "\n\nCongratulations " << name << " !! \nYou got 90% scolarship" << endl;
            }
            else
                cout << "\n\nCongratulations " << name << " s!! \nYou got 80% scolarship" << endl;
        }
    }
};
int seniors::index = 0; // static variable
int main()
{
    int size;  // int
    welcome(); // function call
    cout << "\n\nEnter the total numbers of students in your wing : ";
    cin >> size;
    seniors student_index[size];   // array of objects
    for (int i = 0; i < size; i++) // loop
    {
        student_index[i].setdata();
    }
    for (int i = 0; i < size; i++)
    {
        student_index[i].getdata();
    }
    for (int i = 0; i < size; i++)
    {
        student_index[i].scholarship();
    }

    return 0;
}
void welcome() // function
{
    for (int i = 0; i < 43; i++)
    {
        cout << " ";
    }
    for (int i = 0; i < 43; i++)
    {
        cout << "x";
    }
    cout << "\n";
    for (int i = 0; i < 3; i++)
    {
        for (int space = 0; space < 43; space++)
        {
            cout << " ";
        }
        for (int x = 0; x < 1; x++)
        {
            cout << "x";
        }
        if (i == 1)
        {
            cout << "\t   WELCOME TO HINDU UNIVERSITY\t";
        }
        if (i == 1)
        {
            for (int space = 0; space < 5; space++)
            {
                cout << " ";
            }
        }
        else
        {
            for (int space = 0; space < 41; space++)
            {
                cout << " ";
            }
        }
        for (int x = 0; x < 1; x++)
        {
            cout << "x";
        }
        cout << "\n";
    }
    for (int i = 0; i < 43; i++)
    {
        cout << " ";
    }
    for (int i = 0; i < 43; i++)
    {
        cout << "x";
    }
}
