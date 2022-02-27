#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    // char str[] = "Amit ";
    // char str1[] = "Kumar"; merges str and str1
    // strcat(str, str1); and store it into str
    // cout << str;

    char str[] = "Amit ";
    char str1[20];
    strcpy(str1, str); // copies str and store it into str1
    cout << str1;
    return 0;
}