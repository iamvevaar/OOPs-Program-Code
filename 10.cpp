#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

using namespace std;

class carpentry
{
    char twood[20];
    int cyears;
    char tcreations[40];
    char toolsused[40];

public:
    carpentry()
    {
        strcpy(twood, "unknown");
        cyears = 0;
        strcpy(tcreations, "unknown");
        strcpy(toolsused, "unknown");
    }

    void cinput()
    {
        fflush(stdin);
        cout << "\nType of Wood:";
        gets(twood);
        cout << "\nYears of Experience in Carpentry:";
        cin >> cyears;
        fflush(stdin);
        cout << "\nType of Creations:";
        gets(tcreations);
        cout << "\nTools Used:";
        gets(toolsused);
    }
    void coutput()
    {
        cout << "\nType of Wood:" << twood;
        cout << "\nYears of Experience in Carpentry:" << cyears;
        cout << "\nType of Creations:" << tcreations;
        cout << "\nTools Used:" << toolsused;
    }
};

class masonry
{
    char tconst[40];
    int myears;
public:
    masonry()
    {
        strcpy(tconst, "unknown");
        myears = 0;
    }
    void minput()
    {
        fflush(stdin);
        cout << "\nType of Constructions:";
        gets(tconst);
        cout << "\nYears of Expirence in Masonary:";
        cin >> myears;
    }
    void moutput()
    {
        cout << "\nType of Constructions:" << tconst;
        cout << "\nYears of Expirence in Masonary:" << myears;
    }
};

class driving
{
    int license_no;
    int dyears;
    char tvehicles[40];

public:
    driving()
    {
        license_no = 0;
        dyears = 0;
        strcpy(tvehicles, "unknown");
    }

    void dinput()
    {
        cout << "\nLicense Number:";

        cin >> license_no;
        cout << "\nYears of Expirence in Driving:";
        cin >> dyears;
        fflush(stdin);
        cout << "\nTypes of Vehicles:";
        gets(tvehicles);
    }

    void doutput()
    {
        cout << "\nLicense Number:" << license_no;
        cout << "\nYears of Expirence in Driving:" << dyears;
        cout << "\nTypes of Vehicles:" << tvehicles;
    }
};

class employee : public carpentry, public masonry, public driving
{
    int empid;
    int yoe;
    char address[40];
    char phone[11];

public:
    int s[3];
    employee()
    {
        empid = 0;
        yoe = 0;
        strcpy(address, "unknown");
        strcpy(phone, "unknown");
        for (int i = 0; i < 3; i++)

        {
            s[i] = 0;
        }
    }
    void input()
    {
        cout << "\nEmployee Id:";
        cin >> empid;
        cout << "\nWorking Expirence:";
        cin >> yoe;
        fflush(stdin);
        cout << "\nEmployee Address:";
        gets(address);
        cout << "\nEmployee Phone Number:";
        gets(phone);
    }
    void output()
    {
        cout << "\nEmployee Id:" << empid;
        cout << "\nWorking Expirence:" << yoe;
        cout << "\nEmployee Address:" << address;
        cout << "\nEmployee PhoneNumber:" << phone;
    }
    int rempid()
    {
        return (empid);
    }
};

int main()
{
    employee e[3];

    int ec = 0, n, i, eid, f;
    while (1)
    {
        cout << "\nMENU\n1.Enter Employee Details\n2.Show Details\n3.Exit\nEnter Choice:";
        cin >> n;
        switch (n)
        {
        case 1:
            e[ec].input();
            cout << "\nPress 1 If You Know Carpentry,Else Press 0:";
            cin >> i;
            if (i == 1)
            {
                e[ec].s[0] = 1;
                e[ec].cinput();
            }
            cout << "\nPress 1 If You Know Masonry,Else Press 0:";
            cin >> i;
            if (i == 1)
            {
                e[ec].s[1] = 1;
                e[ec].minput();
            }
            cout << "\nPress 1 If You Know Driving,Else Press 0:";
            cin >> i;
            if (i == 1)
            {
                e[ec].s[2] = 1;
                e[ec].dinput();
            }
            ec++;
            break;

        case 2:
            cout << "Enter Employee Id:";
            cin >> eid;
            f = 0;
            for (i = 0; i < ec; i++)
            {
                if (e[i].rempid() == eid)
                {
                    f = 1;
                    break;
                }
            }
            if (f == 1)
            {
                e[i].output();
                if (e[i].s[0] == 1)
                {
                    e[i].coutput();
                }
                if (e[i].s[1] == 1)
                {
                    e[i].moutput();
                }
                if (e[i].s[2] == 1)
                {
                    e[i].doutput();
                }
            }
            else
            {
                cout << "\nEmployee Id Not Found!!!";
            }
            getch();

            break;
        case 3:
            exit(0);

        default:
            cout << "Wrong Choice!!!";
        }
    }
}
