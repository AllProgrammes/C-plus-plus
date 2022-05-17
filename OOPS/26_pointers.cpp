#include <iostream>
using namespace std;

int main()
{
    /*basic example*/
    int a = 6;     // simple integer
    int *ptr = &a; // pointer moment XD XD
    // ok ok jokes aside ptr is a pointer which stores the address of int a
    cout << "The address of a is " << ptr << " but the value of a is " << *(ptr) << endl;

    // New Operator
    int *ptrx = new int(60);
    cout << "The address of ptrx is " << ptrx << " but the value of ptrx is " << *(ptrx) << endl;

    // Array moment
    int *array = new int[3]; // by doing this I created a array storing 3 blocks of int memory
    array[0] = 5;            // can be written as *(array) = 10
    array[1] = 10;           // can be written as *(array+1) = 10
    array[2] = 20;           // can be written as *(array+2)  = 10
    cout << "The value of array[0] is " << array[0] << endl;
    cout << "The value of array[1] is " << array[1] << endl;
    cout << "The value of array[2] is " << array[2] << endl;

    // Delete Operator
    delete array;
    cout << "Freed the memory" << endl;
    cout << "The value of array[0] is " << array[0] << endl;
    cout << "The value of array[1] is " << array[1] << endl;
    cout << "The value of array[2] is " << array[2] << endl;
    // All the above will give garbage values
    return 0;
}