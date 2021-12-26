#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
typedef char r[15];
int count1 = 0;
using namespace std;
int count2 = 0;
class address
{
public:
    char door_no[5];
    char street_name[20];
    char city[20];
    char state[20];
};
class student
{
    char roll[15];
    char name[25];
    char branch[20];
    address adr;
public:
    void getdata()
    {
        fflush(stdin);
        cout << "\nEnter RollNo.:";
        gets(roll);
        cout << "Enter Name:";
        gets(name);
        fflush(stdin);
        cout << "Enter Branch:";
        gets(branch);
        fflush(stdin);
        cout << "Enter Address:";
        cout << "\tDoor No.:";
        gets(adr.door_no);
        cout << "\tStreet Name:";
        gets(adr.street_name);
        cout << "\tCity:";
        gets(adr.city);
        cout << "\tState:";
        gets(adr.state);
    }
    int putdata(r &rol)
    {
        if (strcmp(rol, roll) == 0)
        {
            cout << "\nRollNo.:";
            puts(roll);
            cout << "Name:";
            puts(name);
            cout << "Branch:";
            puts(branch);
            cout << "Address:";
        }
        else

            cout << "\tDoorNo.:";
        puts(adr.door_no);
        cout << "\tStreet Name:";
        puts(adr.street_name);
        cout << "\tCity:";
        puts(adr.city);
        cout << "\tState:";
        puts(adr.state);
        return 1;

        return 0;
    }
    int delet(r &rol)
    {
        if (strcmp(rol, roll) == 0)
            return 1;

        else
    return 0;
    }
}s[5];

class employee
{
    char id[15];
    char name[25];
    char department[20];
    address adr;

public:
    void getdata()
    {
        fflush(stdin);
        cout << "Enter ID:";
        gets(id);
        cout << "Enter Name:";
        gets(name);
        fflush(stdin);
        cout << "Enter Department:";
        gets(department);
        fflush(stdin);
        cout << "Enter Address:";
        cout << "\n\tDoor No.:";
        gets(adr.door_no);
        cout << "\tStreet Name:";
        gets(adr.street_name);
        cout << "\tCity:";
        gets(adr.city);
        cout << "\tState:";
        gets(adr.state);
    }
    int putdata(r &Id)
    {
        if (strcmp(Id, id) == 0)
        {
            cout << "\nID:";
            puts(id);
            cout << "\nName:";
            puts(name);
            cout << "\nDepartment:";
            puts(department);
            cout << "\nAddress:";
            cout << "\tDoor No.:";
            puts(adr.door_no);
            cout << "\tStreet Name:";
            puts(adr.street_name);
            cout << "\tCity:";
            puts(adr.city);
            cout << "\tState:";
            puts(adr.state);
            return 1;
        }
        else
            return 0;
    }
    int delet(r &Id)
    {
        if (strcmp(Id, id) == 0)
            return 1;
        else
            return 0;
    }
} e[5];

int main()
{
    while (1)
    {
    A:
        int ch;
        cout << "1.STUDENT\n2.EMPLOYEE\n3.EXIT\n";
        cout << "Enter your choice:";
        cin >> ch;
        if (ch == 1)
        {
            while (1)
            {

                cout << "\nMENU\n\n1.Insert Record\n2.Display Record\n3.Delete Record\n4.Back to Main Menu\n";
                int c;
                cout << "Enter your choice:";
                cin >> c;
                if (c == 4)
                    goto A;
                else
                {
                    char rol[15];
                    int x;
                    switch (c)
                    {
                    case 1:
                        s[count1].getdata();
                        count1++;
                        break;
                    case 2:
                        if (count1 == 0)
                            cout << "\nEMPTY! NO RECORD EXIST...";
                        else
                        {
                            fflush(stdin);
                            cout << "\nEnter Roll No.:";
                            gets(rol);
                            for (int i = 0; i < count1; i++)
                            {
                                x = s[i].putdata(rol);
                                if (x == 1)
                                    break;
                            }
                            if (x == 0)
                                cout << "\nRECORD NOT FOUND!";
                        }

                        getch();
                        break;
                    case 3:
                        if (count1 == 0)
                            cout << "\nEMPTY! NO RECORD EXIST...";
                        else
                        {
                            fflush(stdin);
                            cout << "\nEnter Roll No.:";
                            gets(rol);
                            for (int i = 0; i < count1; i++)
                            {
                                x = s[i].delet(rol);
                                if (x == 1)
                                {
                                    for (int j = i; j < count1; j++)
                                        s[j] = s[j + 1];
                                    count1--;
                                    cout << "\nRECORD DELETED SUCCESSFULLY.";
                                    break;
                                }
                            }
                            if (x == 0)
                                cout << "\nRECORD NOT FOUND!";
                        }
                        getch();
                        break;
                    default:
                        cout << "\nInvalid Choice! Try Again...";
                        getch();
                    }
                }
            }
        }
        else if (ch == 2)
        {
            while (1)
            {   
                cout<< "\nMENU\n1.Insert Record\n2.Display Record\n3.Delete Record\n4.Back to Main";
                int c;
                cout << "Enter your choice:";
                cin >> c;
                if (c == 4)
                    goto A;
                else
                {
                    char Id[15];
                    int x;
                    switch (c)
                    {
                    case 1:
                        e[count2].getdata();
                        count2++;
                        break;
                    case 2:
                        if (count2 == 0)
                            cout << "\nEMPTY! NO RECORD EXISTS...";
                        else
                        {
                            fflush(stdin);
                            cout << "\nEnter ID:";
                            gets(Id);
                            for (int i = 0; i < count2; i++)
                            {
                                x = e[i].putdata(Id);
                                if (x == 1)
                                    break;
                            }
                            if (x == 0)
                                cout << "\nRECORD NOT FOUND!";
                        }
                        getch();
                        break;
                    case 3:
                        if (count2 == 0)
                            cout << "\nEMPTY! NO RECORD EXISTS...";
                        else
                        {
                            fflush(stdin);
                            cout << "\nEnter ID:";
                            gets(Id);
                            for (int i = 0; i < count2; i++)
                            {
                                x = e[i].delet(Id);
                                if (x == 1)
                                {
                                    for (int j = i; j < count2; j++)
                                        e[j] = e[j + 1];
                                    count2--;
                                    cout << "\n\nRECORD DELETED SUCCESSFULLY.";
                                    break;
                                }
                            }
                            if (x == 0)
                                cout << "\nRECORD NOT FOUND!";
                        }
                        getch();
                        break;
                    default:
                        cout << "\nInvalid Choice! Try Again...";
                        getch();
                    }
                }
            }
        }
        else if (ch == 3)
            exit(0);
        else
            cout << "\nWRONG CHOICE! TRY AGAIN...";
        getch();
    }
    return 0;
}
