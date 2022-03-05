#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0, tmp;
    printf("\nEnter a number : ");
    scanf("%d", &n);
    while (n > 0)
    {
        tmp = n % 10;
        sum = sum + tmp;
        n = n / 10;
    }
    printf("\nSum : %d", sum);
    return 0;
}
