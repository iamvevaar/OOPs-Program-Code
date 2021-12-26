#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

using namespace std;
#define MAX 3 
int c = 0;
char an[15];

class bank
{
    char acc[15];
    long balance;
    float rate;

public:
    bank()
    {
        cout << "\nEnter " << c + 1 << " Account Details :- \n";
        cout << "\nEnter Account Number : ";
        cin >> acc;
        cout << "Enter Account Balance : ";
        cin >> balance;
        cout << "Enter Interest Rate : ";
        cin >> rate;
        cout << "\n";
        c++;
    }
    ~bank()
    {
        c--;
    }
    void deposit()
    {
        long add;
        cout << "\nEnter Amount : ";
        cin >> add;
        balance = balance + add;
        cout << "\nYour Updated Balance is : " << balance << "\n\n";
    }
    int withdraw()
    {
        long sub;
        cout << "Enter Amount : ";
        cin >> sub;
        if (sub > balance)
        {
            cout << "\nInsufficient Balance !\nYour Total Balance is : " << balance;
        }
        else
        {
        }
    balance = balance - sub;
    cout << "\nYour updated balance is : " << balance << "\n\n";
    return 1;
    return 0;
    }

    void interest()
    {
        double ti;
        ti = (float)(balance * rate / 100);
        cout << "\nYour Total Interest is : Rs. " << ti << "\n\n";
    }

    void display()
    {
        cout << "\nAccount Number :- " << acc;
        cout << "\nTotal Balance : Rs. " << balance;
        cout << "\nInterest Rate :- " << rate << "\n\n";
    }

    int search()
    {
        if (strcmp(acc, an) == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};

int main()
{
    int i, flag, choice;
    bank b[MAX];
    while (choice != 5)
    {
        cout <<"\n ENTER YOUR CHOICE	\n\n 1. Deposit\n 2. Withdraw\n 3. Calculate Interest\n 4. Account Information\n 5. Exit\n\n ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\n\n------DEPOSIT	\n";
            cout << "\nEnter Account Number : ";
            cin >> an;
            for (i = 0; i < c; i++)
            {
                flag = b[i].search();
                if (flag == 1)
                {
                    b[i].deposit();
                    cout << "\nAMOUNT DEPOSITED SUCCESSFULLY.";
                    break;
                }
            }
            if (flag == 0)
            {
                cout << "\nAccount Number " << an << " NOT FOUND !\n\n";
            }
            getch();
            break;

        case 2:
            cout << "\n------WITHDRAW	\n";
            cout << "\nEnter Account Number : ";
            cin >> an;
            for (i = 0; i < c; i++)
            {
                flag = b[i].search();
                if (flag == 1)
                {
                    int a = b[i].withdraw();
                    if (a == 1)
                        cout << "\nAMOUNTWITHDRAWNSUCCESSFULLY.\n";
                    break;
                }
            }
            if (flag == 0)
            {
                cout << "\nAccount Number " << an << " NOT FOUND !\n\n";
            }
            getch();
            break;

        case 3:
            cout << "\n------CALCULATE INTEREST	\n";
            cout << "\nEnter Account Number : ";
            cin >> an;

            for (i = 0; i < c; i++)
            {
                flag = b[i].search();
                if (flag == 1)
                {

                    b[i].interest();
                    break;
                }
            }
            if (flag == 0)
            {
                cout << "\nAccount Number " << an << " NOT FOUND !\n\n";
            }
            getch();
            break;
        case 4:
            cout << "\n------ACCOUNT INFORMATION	\n";
            cout << "\nEnter Account Number : ";
            cin >> an;

            for (i = 0; i < c; i++)
            {
                flag = b[i].search();
                if (flag == 1)
                {
                    b[i].display();
                    break;
                }
            }
            if (flag == 0)
            {
                cout << "Account Number " << an << " NOT FOUND !\n\n";
            }
            getch();
            break;
        case 5:
            exit(0);
            break;

        default:
            cout << "\nINVALID INPUT !\n";
            getch();
        }
    }
    return 0;
}
