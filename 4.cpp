#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

using namespace std;

#define SIZE 5
typedef char r[11];
struct address
{
    char state[50];
    char city[50];
    char area[50];
    char house_no[5];
    char street_name[50];
};

struct d_o_b
{
    int day;
    char month[10];
    int year;
};

class ID_Card
{

    char name[50];
    char f_name[50];
    char roll_no[11];
    struct address adr;
    char branch[50];
    int year;
    char mo_no[11];
    struct d_o_b dob;

public:
    void insert();
    int update(r &);
    int display(r &);
    int delet(r &);
};

int c = 0;
void ID_Card::insert()
{
    fflush(stdin);
    cout << "Enter Name : ";
    gets(name);
    cout << "Enter Father's Name : ";
    gets(f_name);
    cout << "Enter Your Date of Birth :-\n ";
    cout << "\tEnter Day : ";
    cin >> dob.day;
    fflush(stdin);
    cout << "\tEnter Month : ";
    gets(dob.month);
    cout << "\tEnter Birth Year : ";
    cin >> dob.year;
    fflush(stdin);
    cout << "Enter Roll No. : ";
    gets(roll_no);
    cout << "Enter your Branch : ";
    gets(branch);
    cout << "Enter Year : ";
    cin >> year;
    fflush(stdin);
    cout << "Enter Mobile No. : ";
    gets(mo_no);
    fflush(stdin);
    cout << "Enter Address :-\n";
    cout << "\tEnter House No. : ";
    gets(adr.house_no);
    fflush(stdin);
    cout << "\tEnter Street Name : ";
    gets(adr.street_name);
    fflush(stdin);
    cout << "\tEnter Area : ";
    gets(adr.area);
    fflush(stdin);
    cout << "\tEnter City : ";
    gets(adr.city);
    fflush(stdin);
    cout << "\tEnter State : ";
    gets(adr.state);
}

int ID_Card::display(r &rn)
{
    if (strcmp(roll_no, rn) == 0)
    {
        system("cls");
        cout << "Name : ";
        puts(name);
        cout << "Father's Name : ";
        puts(f_name);
        cout << "Date of Birth : ";
        cout << dob.day << " " << dob.month << " " << dob.year;
        cout << "Roll No. : ";
        puts(roll_no);
        cout << "Branch : ";
        puts(branch);
        cout << "Year : ";
        cout << year;
        cout << "Mobile No. : ";
        puts(mo_no);
        cout << "Address : " << adr.house_no << ", " << adr.street_name << ", " << adr.area << ", " << adr.city << ", " << adr.state;
        return 1;
    }
    else
return 0;
}


int ID_Card::update(r &rn)
{
    int ch;
    if (strcmp(roll_no, rn) == 0)
    {
        system("cls");
        cout << "\n UPDATE :-\n";
        cout << "1. Name\n2. Father's Name\n3. Date of Birth\n4. Branch\n5. Year\n6. Mobile	No.\n7. Address\n ";
        cout << "\nEnter your choice : ";
        cin >> ch;
        fflush(stdin);
        switch (ch)
        {
        case 1:
            cout << "Enter Name : ";
            gets(name);
            break;
        case 2:
            cout << "Enter Father's Name : ";
            gets(f_name);
            break;
        case 3:
            cout << "Enter Your Date of Birth :-\n ";
            cout << "\tEnter Day : ";
            cin >> dob.day;
            cout << "\tEnter Month : ";
            gets(dob.month);
            cout << "\tEnter Birth Year : ";
            cin >> dob.year;
            break;
        case 4:
            cout << "Enter your Branch : ";
            gets(branch);
            break;
        case 5:
            cout << "Enter Year : ";
            cin >> year;
            break;
        case 6:
            cout << "Enter Mobile No. : ";
            gets(mo_no);
            break;
        case 7:
            cout << "Enter Address :-\n";
            cout << "\tEnter House No. : ";
            gets(adr.house_no);
            cout << "\tEnter Street Name : ";
            gets(adr.street_name);
            cout << "\tEnter Area : ";
            gets(adr.area);
            cout << "\tEnter City : ";

            gets(adr.city);
            cout << "\tEnter State : ";
            gets(adr.state);
            break;
        default:
            cout << "\nINVALID CHOICE !";
        }
    }
    else if (ch > 0 && ch < 8)
    return 1;
return 0;
}

int ID_Card::delet(r &rn)
{
    if (strcmp(roll_no, rn) == 0)
        return 1;
    else
    return 0;
}

int main()
{
    int ch, a, i, flag = 0;
    char rol[11];
    ID_Card id[SIZE];
    while (1)
    {
        system("cls");
        cout << "\nMENU\n1. Insert\n2. Update\n3. Display\n4. Delete\n5. Exit\n\n";
        cout << "Enter your choice : ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            system("cls");
            id[c].insert();
            c++;
            cout << "\nRecord Inserted Successfully.";
            getch();
            break;
        case 2:
            if (c == 0)
            {
                cout << "\nNO RECORD !";
                getch();
                break;
            }
            fflush(stdin);
            cout << "Enter Roll No. to Update : ";
            gets(rol);
            system("cls");
            for (i = 0; i < c; i++)
            {
                a = id[i].update(rol);
                if (a == 1)
                    break;
            }
            if (a == 0)
                cout << "\nROLL NO. NOT FOUND ! ";
            else
                cout << "\nRecord Updated Successfully.";
            getch();
            break;
        case 3:
            if (c == 0)
            {

                cout << "\nNO RECORD !";
                getch();
                break;
            }
            fflush(stdin);
            cout << "\nEnter Roll No. to Display : ";
            gets(rol);
            for (i = 0; i < c; i++)
            {
                a = id[i].display(rol);
                if (a == 1)
                    break;
            }

            if (a == 0)
                cout << "\nROLL NO. NOT FOUND ! ";
            getch();
            break;
        case 4:
            if (c == 0)
            {
                cout << "\nNO RECORD !";
                getch();
                break;
            }
            fflush(stdin);
            cout << "\nEnter Roll No. to Delete : ";
            gets(rol);
            int j;
            for (i = 0; i < c; i++)
            {
                a = id[i].delet(rol);
                if (a == 1)

                {
                    for (j = i; j < c; j++)
                        id[j] = id[j + 1];
                    c--;
                    break;
                }
            }
            if (a == 0)
                cout << "\nROLL NO. NOT FOUND ! ";
            else
                cout << "\nRecord Deleted Successfully.";
            getch();
            break;
        case 5:
            exit(0);
        default:
            cout << "\nInvalid Choice! Try Again...";
        }
    }
    getch();
    return (0);
}
