#include <iostream>
using namespace std;
class project
{
private:
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
        string choice;
        cout << "\n\nPress 'C' to continue or Press 'M' to go to main menu : ";
        cin >> choice;
        if (choice == "C" || choice == "c")
        {
            mul();
        }
        else if (choice == "M" || choice == "m")
        {
            start();
        }
        else
            cout << "\nPlease enter any valid code ! \n";
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
        string choice;
        cout << "\n\nPress 'C' to continue or Press 'M' to go to main menu : ";
        cin >> choice;
        if (choice == "C" || choice == "c")
        {
            add();
        }
        else if (choice == "M" || choice == "m")
        {
            start();
        }
        else
            cout << "\nPlease enter any valid code ! \n";
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
        string choice;
        cout << "\n\nPress 'C' to continue or Press 'M' to go to main menu : ";
        cin >> choice;
        if (choice == "C" || choice == "c")
        {
            div();
        }
        else if (choice == "M" || choice == "m")
        {
            start();
        }
        else
            cout << "\nPlease enter any valid code ! \n";
        return 0;
    }
    int cal()
    {
        cout << endl;
        char n;
        cout << "\nM(multiply),\nS(substraction),\nD(division),\nA(addition)";
        cout << "\nSo, What you want to do ? ";
        cin >> n;
        switch (n)
        {
        case 'A':
            add();
            break;
        case 'M':
            mul();
            break;
        case 'D':
            div();
            break;
        case 'S':
            sub();
            break;
        default:
            cout << "Please enter any valid code .\n";
            cal();
            break;
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
        string choice;
        cout << "\n\nPress 'C' to continue or Press 'M' to go to main menu : ";
        cin >> choice;
        if (choice == "C" || choice == "c")
        {
            sub();
        }
        else if (choice == "M" || choice == "m")
        {
            start();
        }
        else
            cout << "\nPlease enter any valid code ! \n";
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
        string choice;
        cout << "\n\nPress 'C' to continue or Press 'M' to go to main menu : ";
        cin >> choice;
        if (choice == "C" || choice == "c")
        {
            table();
        }
        else if (choice == "M" || choice == "m")
        {
            start();
        }
        else
            cout << "\nPlease enter any valid code ! \n";
        return 0;
    }
    int prime()
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
        string choice;
        cout << "\n\nPress 'C' to continue or Press 'M' to go to main menu : ";
        cin >> choice;
        if (choice == "C" || choice == "c")
        {
            prime();
        }
        else if (choice == "M" || choice == "m")
        {
            start();
        }
        else
            cout << "\nPlease enter any valid code ! \n";
        return 0;
    }
    int matrix()
    {
        int row, col;
        string choose;
        string option;
        int matrix1[100][100];
        int matrix2[100][100];
        cout << "Enter the number of rows and column : ";
        cin >> row >> col;
        cout << "\nFill values of Matrix 1 \n";
        for (int r = 1; r <= row; r++)
        {
            for (int c = 1; c <= col; c++)
            {
                cout << "Enter number " << r << c << " : ";
                cin >> matrix1[r][c];
            }
        }
        cout << "\nFill values of Matrix 2 \n";
        for (int r = 1; r <= row; r++)
        {
            for (int c = 1; c <= col; c++)
            {
                cout << "Enter number " << r << c << " : ";
                cin >> matrix2[r][c];
            }
        }
        cout << "\nYour matrix tables are as follow :-\n\n";
        for (int r = 1; r <= row; r++)
        {
            for (int c = 1; c <= col; c++)
            {
                cout << matrix1[r][c] << "\t";
            }
            cout << "\t";
            for (int c = 1; c <= col; c++)
            {
                cout << matrix2[r][c] << "\t";
            }
            cout << "\n";
        }
        cout << "\na/A to find the sum,\ns/S to find the difference\n";
        cout << "\nWhat you want to do ?\n";
        cin >> choose;
        cout << "\n\n";
        if (choose == "A" || choose == "a")
        {
            for (int r = 1; r <= row; r++)
            {
                for (int c = 1; c <= col; c++)
                {
                    cout << matrix1[r][c] + matrix2[r][c] << "\t";
                }
                cout << "\n";
            }
            cout << "Want to see difference also ? Press 'S' ";
            cin >> option;
            if (option == "s" || option == "S")
            {
                for (int r = 1; r <= row; r++)
                {
                    for (int c = 1; c <= col; c++)
                    {
                        cout << matrix1[r][c] - matrix2[r][c] << "\t";
                    }
                    cout << "\n";
                }
            }
        }
        else if (choose == "S" || choose == "s")
        {
            for (int r = 1; r <= row; r++)
            {
                for (int c = 1; c <= col; c++)
                {
                    cout << matrix1[r][c] - matrix2[r][c] << "\t";
                }
                cout << "\n";
            }

            cout << "Want to see sum also ? Press 'A' ";
            cin >> option;
            if (option == "a" || option == "A")
            {
                for (int r = 1; r <= row; r++)
                {
                    for (int c = 1; c <= col; c++)
                    {
                        cout << matrix1[r][c] + matrix2[r][c] << "\t";
                    }
                    cout << "\n";
                }
            }
        }
        else
        {
            cout << "PLEASE ENTER A VALID CODE ! \n";
            matrix();
        }

        string choice;
        cout << "\n\nPress 'C' to continue or Press 'M' to go to main menu : ";
        cin >> choice;
        if (choice == "C" || choice == "c")
        {
            matrix();
        }
        else if (choice == "M" || choice == "m")
        {
            start();
        }
        else
            cout << "\nPlease enter any valid code ! \n";
        return 0;
    }
    int marks()
    {
        string name[100];
        int n;
        int english[100], maths[100], hindi[100], science[100], socialscience[100];
        ;
        cout << "Enter the number of students : ";
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cout << "\nEnter the name of student " << i << " : ";
            cin >> name[i];
            cout << "\nEnter his/her english marks : ";
            cin >> english[i];
            cout << "Enter his/her maths marks : ";
            cin >> maths[i];
            cout << "Enter his/her hindi marks : ";
            cin >> hindi[i];
            cout << "Enter his/her science marks : ";
            cin >> science[i];
            cout << "Enter his/her social science marks : ";
            cin >> socialscience[i];
        }
        for (int i = 1; i <= n; i++)
        {
            float sum = english[i] + maths[i] + hindi[i] + science[i] + socialscience[i];
            float per = sum / 500 * 100;
            cout << "\nTotal marks of " << name[i] << " is " << sum << " out of 500"
                 << " and percentage is " << per << "% .";
        }
        string choice;
        cout << "\n\nPress 'C' to continue or Press 'M' to go to main menu : ";
        cin >> choice;
        if (choice == "C" || choice == "c")
        {
            marks();
        }
        else if (choice == "M" || choice == "m")
        {
            start();
        }
        else
            cout << "\nPlease enter any valid code ! \n";
        return 0;
    }
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
        string choice;
        cout << "\n\nPress 'C' to continue or Press 'M' to go to main menu : ";
        cin >> choice;
        if (choice == "C" || choice == "c")
        {
            dob();
        }
        else if (choice == "M" || choice == "m")
        {
            start();
        }
        else
            cout << "\nPlease enter any valid code ! \n";
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
        string choice;
        cout << "\n\nPress 'C' to continue or Press 'M' to go to main menu : ";
        cin >> choice;
        if (choice == "C" || choice == "c")
        {
            oddeven();
        }
        else if (choice == "M" || choice == "m")
        {
            start();
        }
        else
            cout << "\nPlease enter any valid code ! \n";

        return 0;
    }
    int shapes()
    {
        char S;
        cout << "s(star),\nt(temple),\nr(rectangle),\nq(square),\nm(main menu),\nx(exit)";
        cout << "\nWhat shape you want to see ?\n";
        cin >> S;
        switch (S)
        {
        case 'm':
            start();
            break;
        case 'x':
            break;
        case 'r':
        {
            int row, col, s;
            int breadth, length;
            cout << "Enter the length and breadth of Rectangle : ";
            cin >> length >> breadth;

            for (col = 0; col < length; col++)
            {
                cout << "x ";
            }
            cout << "\n";
            for (row = 0; row < (breadth - 2); row++)
            {
                for (col = 0; col < 1; col++)
                {
                    cout << "x ";
                }
                for (s = 0; s < (length - 2); s++)
                {
                    cout << "  ";
                }
                for (col = 0; col < 1; col++)
                {
                    cout << "x";
                }
                cout << "\n";
            }
            for (col = 0; col < length; col++)
            {
                cout << "x ";
            }
            cout << "\n\n";
            shapes();
        }
        break;
        case 'q':
        {
            int row, col, s;
            int side;
            cout << "Enter the side of square : ";
            cin >> side;

            for (col = 0; col < side; col++)
            {
                cout << "x ";
            }
            cout << "\n";
            for (row = 0; row < (side - 2); row++)
            {
                for (col = 0; col < 1; col++)
                {
                    cout << "x ";
                }
                for (s = 0; s < (side - 2); s++)
                {
                    cout << "  ";
                }
                for (col = 0; col < 1; col++)
                {
                    cout << "x";
                }
                cout << "\n";
            }
            for (col = 0; col < side; col++)
            {
                cout << "x ";
            }
            cout << "\n\n";
            shapes();
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
            cout << "\n\n";
            shapes();
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
            cout << "\n\n";
            shapes();
        }
        break;
        default:
            cout << "\nPlease enter any valid code ! \n\n";
            shapes();
            break;
        }
        return 0;
    }

public:
    int start()
    {
        cout << "\n";
        char X;
        cout << "Available codes as of now are :- \nC(calculator),\nE(checks for odd even),\nS(shapes),\nT(table),\nO(d.o.b),\nX(Print Matrix),\nP(check for prime),\nM(Enter marks of students and find its total and percentage),\nx(exit)";
        cout << "\n\nEnter a number code of what you : ";
        cin >> X;
        switch (X)
        {
        case 'x':
            break;
        case 'M':
            marks();
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
        case 'C':
            cal();
            break;
        case 'P':
            prime();
            break;
        case 'X':
            matrix();
            break;
        default:
            cout << "\nPlease enter any valid code ! \n";
            start();
            break;
        }
    }
};
int main()
{
    project use;
    use.start();
    return 0;
}