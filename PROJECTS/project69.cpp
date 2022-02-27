#include <iostream>
using namespace std;
int add();
int div();
int mul();
int table();
int shapes();
int oddeven();
int sub();
int dob();
// int prime();
int main()
{
    cout << "\n\n";
    char X;
    cout << "\t\t-- THIS IS A SMALL PROGRAMME WHICH CAN DO MULTIPLE WORKS --\n\n\n";
    cout << "Available codes as of now are :- \nM(multiply),\ns(substraction),\nD(division),\nA(addition),\nE(checks for odd even),\nS(shapes),\nT(table),\nO(d.o.b),\nP(check for prime)";
    cout << "\n\nEnter a number code of what you : ";
    cin >> X;
    switch (X)
    {
    case 'A':
        add();
        break;
    case 'P':
    {
        int a, b, c;
        printf("ENTER THE NUMBER U WANT TO CHECK FOR PRIME OR NON PRIME : \n");
        scanf("%d", &b);
        for (a = 1; a <= b; ++a)
        {
            if (b % a == 0)
            {
                ++c;
            }
        }

        if (c <= 2)
        {
            printf("%d is a prime number. ", b);
        }
        else
        {
            printf("%d is a not a prime number. ", b);
        }
    }
    break;
    case 'M':
        mul();
        break;
    case 'D':
        div();
        break;
    case 's':
        sub();
        break;
    case 'E':
        oddeven();
        break;
    case 'S':
        shapes();
        break;
    case 'T':
        table();
        break;
    case 'O':
        dob();
        break;
    default:
        break;
    }
    return 0;
}
int add()
{
    int num[100], i, n, sum = 0;
    cout << "How many numbers you want to add ?\n";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cout << "Enter " << i << " number : ";
        cin >> num[i];
        sum = sum + num[i];
    }
    cout << "sum of " << n << " numbers is = " << sum;
    return 0;
}
int mul()
{
    int num[100], i, n, product = 1;
    cout << "How many numbers you want to multiply ?\n";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cout << "Enter " << i << " number : ";
        cin >> num[i];
        product = product * num[i];
    }
    cout << "product of " << n << " numbers is = " << product;
    return 0;
}
int div()
{
    int num1, num2;
    cout << "Enter 2 numbers : ";
    cin >> num1 >> num2;
    if (num1 > num2)
    {
        cout << "Quotient is " << num1 / num2 << " and remainder is " << num1 % num2;
    }
    else
    {
        cout << "Quotient is " << num2 / num1 << " and remainder is " << num2 % num1;
    }

    return 0;
}
int table()
{
    int n, i;
    printf("ENTER THE NUMBER : ");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}
int sub()
{
    int num1, num2;
    cout << "Enter 2 numbers : ";
    cin >> num1 >> num2;
    if (num1 > num2)
    {
        cout << "Difference of " << num1 << " and " << num2 << " is " << num1 - num2;
    }
    else
    {
        cout << "Difference of " << num1 << " and " << num2 << " is " << num2 - num1;
    }

    return 0;
}
// int prime()
// {
//     int a, b, c;
//     printf("ENTER THE NUMBER U WANT TO CHECK FOR PRIME OR NON PRIME : \n");
//     scanf("%d", &b);
//     for (a = 1; a <= b; a++)
//     {
//         if (b % a == 0)
//         {
//             c++;
//         }
//     }
//     cout << c << endl;
//     if (c <= 2)
//     {
//         printf("%d is a prime number. ", b);
//     }
//     else
//     {
//         printf("%d is a not a prime number. ", b);
//     }
//     return 0;
// }
int dob()
{
    int a, b, c, d, e, f;
    printf("ENTER TODAY'S DATE IN YYYY MM DD FORMAT : \n");
    scanf("%d%d%d", &a, &b, &c);
    printf("ENTER YOUR D.O.B IN  YYYY MM DD FORMAT : \n");
    scanf("%d%d%d", &d, &e, &f);

    if (d > a)
    {
        printf(" ARE U DOING TIME TRAVEL ?");
    }
    else if (c >= f)
    {
        printf("you are %d days, ", c - f);
    }
    else
    {
        printf("you are %d days, ", ((31 + c) - f));
        --b;
    }

    if (d > a)
    {
        printf(" ARE U DOING TIME TRAVEL ?");
    }
    else if (b >= e)
    {
        printf(" %d months, ", b - e);
    }
    else
    {
        printf(" %d months, ", ((12 + b) - e));
        --a;
    }

    if (a >= d)
    {
        printf("and %d years old ", a - d);
    }
    else if (d > a)
    {
        printf(" ARE U DOING TIME TRAVEL ?");
    }

    return 0;
}
int oddeven()
{
    int num1;
    cout << "Enter the number : ";
    cin >> num1;
    if (num1 % 2 == 0)
    {
        cout << num1 << " is a even number .";
    }
    else
    {
        cout << num1 << " is a odd number .";
    }
    return 0;
}
int shapes()
{
    char S;
    cout << "s(star),\nt(temple),\nr(rectangle)";
    cout << "\nWhat shape you want to see ?\n";
    cin >> S;
    switch (S)
    {
    case 'r':
    {
        cout << "\n\n\n";
        int row, col, s;
        for (s = 0; s < 22; s++)
        {
            cout << "x";
        }
        cout << "\n";
        for (row = 0; row < 5; row++)
        {
            for (col = 0; col < 1; col++)
            {
                cout << "x";
            }
            for (s = 0; s < 20; s++)
            {
                cout << " ";
            }
            for (col = 0; col < 1; col++)
            {
                cout << "x";
            }
            cout << "\n";
        }
        for (s = 0; s < 22; s++)
        {
            cout << "x";
        }
    }
    break;
    case 's':
    {
        cout << "\n\n\n";
        int r, c, s, e = 10;
        // TOP SEGMENT
        for (r = 1; r < 6; r++)
        {
            for (s = 13; s >= r; s--)
            {
                printf(" ");
            }
            for (c = 0; c < r; c++)
            {
                printf("x");
            }
            for (c = 1; c < r; c++)
            {
                printf("x");
            }
            printf("\n");
        }
        // MIDDLE SEGMENT 1
        for (r = 0; r < 4; r++)
        {
            for (s = 0; s < r; s++)
            {
                printf(" ");
            }
            for (c = 14; c > r; c--)
            {
                printf("x");
            }
            for (c = 14; c > r; c--)
            {
                printf("x");
            }
            printf("\n");
        }
        // MIDDLE SEGMENT 2
        for (r = 0; r < 5; r++)
        {
            for (s = 4; s > r; s--)
            {
                printf(" ");
            }
            for (c = 0; c < r; c++)
            {
                printf("x");
            }
            for (c = 0; c < 20; c++)
            {
                printf("x");
            }
            for (c = 0; c < r; c++)
            {
                printf("x");
            }

            printf("\n");
        }
        // BOTTOM SEGMENT
        for (r = 1; r < 6; r++)
        {
            for (s = 1; s < e; s++)
            {
                printf(" ");
            }
            for (c = 6; c > r; c--)
            {
                printf("x");
            }
            for (c = 5; c > r; c--)
            {
                printf("x");
            }
            e++;
            printf("\n");
        }
    }
    break;
    case 't':
    {
        cout << "\n\n\n";
        int r, c, s;
        for (r = 1; r <= 3; r++)
        {
            for (s = 4; s > 1; s--)
            {
                printf("\t");
            }
            for (c = 0; c < r; c++)
            {
                printf("F ");
            }
            printf("\n");
        }
        for (r = 1; r < 3; r++)
        {
            for (s = 4; s > 1; s--)
            {
                printf("\t");
            }
            for (c = 1; c < 2; c++)
            {
                printf("F\t");
            }
            printf("\n");
        }
        for (r = 1; r < 5; r++)
        {
            for (s = 3; s >= r; s--)
            {
                printf("\t");
            }
            for (c = 0; c < r; c++)
            {
                printf("x\t");
            }
            for (c = 1; c < r; c++)
            {
                printf("x\t");
            }
            printf("\n");
        }
        for (r = 0; r < 1; r++)
        {
            for (c = 0; c < 49; c++)
            {
                printf("-");
            }
            printf("\n");
        }

        for (r = 4; r >= 1; r--)
        {
            for (c = 0; c < 7; c++)
            {
                printf("x\t");
            }
            printf("\n");
        }
        for (r = 0; r < 1; r++)
        {
            for (s = 0; s < 16; s++)
            {
                printf(" ");
            }
            for (c = 0; c < 17; c++)
            {
                printf("-");
            }
            printf("\n");
        }
        for (r = 5; r >= 1; r--)
        {
            for (c = 1; c <= 3; c++)
            {
                printf("x\t");
            }
            for (s = 0; s < 1; s++)
            {
                printf("\t");
            }
            for (c = 1; c <= 3; c++)
            {
                printf("x\t");
            }

            printf("\n");
        }
        for (r = 0; r < 1; r++)
        {
            for (c = 0; c < 49; c++)
            {
                printf("-");
            }
        }
    }
    break;
    default:
        break;
    }
    return 0;
}