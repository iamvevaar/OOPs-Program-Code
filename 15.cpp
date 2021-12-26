#include <iostream>
#include<string.h>
using namespace std;
int dn, ln;

class telephone_directory
{
public:
    char name[30], occ[10], add[50];
    long long int phone;
    virtual void search() = 0;
};

class doctor : public telephone_directory
{
public:
    char quali[10], clinic[30], visit[20];
    void accept()
    {
        cout << "\nEnterName:";
        fflush(stdin);
        gets(name);
        cout << "Enter Occupation:";
        fflush(stdin);
        gets(occ);
        cout << "Enter Phone No:";
        cin >> phone;
        cout << "\nEnter Address:";
        fflush(stdin);
        gets(add);
        cout << "Enter Qualification:";
        fflush(stdin);
        gets(quali);
        cout << "Enter Clinic:";
        fflush(stdin);
        gets(clinic);
        cout << "nEnter Visiting Hours:";
        fflush(stdin);
        gets(visit);
    }
    void display()
    {
        cout << "\nName:" << name;
        cout << "\nOccupation:" << occ;
        cout << "\nPhoneNo:" << phone;
        cout << "\nAddress:" << add;
        cout << "\nQualification:" << quali;
        cout << "\nClinic:" << clinic;
        cout << "\nVisitingHours:" << visit;
    }
    void search();
}d[50];

void doctor::search()
{
    int i;
    char n[30];
    cout << "\nEnter Name Of Doctor To Be Searched:";
    fflush(stdin);
    gets(n);
    for (i = 0; i < dn; i++)
        if (strcmp(d[i].name, n) == 0)
        {
            cout << "\nFound\n";
            d[i].display();
            break;
        }
    if (i == dn)
        cout << "\nNotFound\n";
}
class lawyer : public telephone_directory
{
public:
    char quali[15], typ[10], offadd[50];
    int casatten;
    long int contac;
    void accept()
    {
        cout << "\nEnter Name:";
        fflush(stdin);
        gets(name);
        cout << "Enter Occupation:";
        fflush(stdin);
        gets(occ);
        cout << "Enter Phone No:";
        cin >> phone;
        cout << "Enter Address:";
        fflush(stdin);
        gets(add);
        cout << "Enter Qualification:";
        fflush(stdin);
        gets(quali);
        cout << "EnterType(civil/criminal):";
        fflush(stdin);
        gets(typ);
        cout << "\nEnter Cases attended:";
        cin >> casatten;
        cout << "\nEnter Contactno:";
        cin >> contac;
        cout << "\nEnter Office Address:";
        fflush(stdin);
        gets(offadd);
    }
    void display()
    {
        cout << "\nName:" << name;
        cout << "\nOccupation:" << occ;
        cout << "\nPhoneNo:" << phone;
        cout << "\nAddress:" << add;
        cout << "\nQualification:" << quali;
        cout << "\nType:" << typ;
        cout << "\nCases attended:" << casatten;
        cout << "\nContact no:" << contac;
        cout << "\nOffice Address:" << offadd;
    }
    void search();
} l[50], temp;

void lawyer::search()
{
    bool flag = false;
    int mid, low, high;
    char n[30];
    cout << "\nEnter Name Of lawyer To Be Searched:";
    fflush(stdin);
    gets(n);
    for (low = 0; low < ln; low++)
        for (mid = 0; mid < ln - low - 1; mid++)
            if (strcmp(l[mid].name, l[mid + 1].name) > 0)
            {
                temp = l[mid];
                l[mid] = l[mid + 1];
                l[mid + 1] = temp;
            }
    low = 0;
    high = ln;
    while (low < high)
    {
        mid = (low + high) / 2;
        if (strcmp(l[mid].name, n) == 0)
        {
            cout << "\nFound\n";
            l[mid].display();
            flag = true;
            break;
        }
        else if(strcmp(l[mid].name, n) > 0)
        {
            high = mid - 1;
        }
        else if(strcmp(l[mid].name, n) < 0)
        {
            low = mid + 1;
        }
    }
    if (!flag)
        cout << "\nNot Found\n";
}

int main()
{
    int i;
    cout << "\nEnter No Of Doctors:";
    cin >> dn;
    for (i = 0; i < dn; i++)
    {
        cout << "\nEnter Details For Doctor" << i + 1 << ":";
        d[i].accept();
    }
    cout << "\nEnter No Of Lawyers:";
    cin >> ln;
    for (i = 0; i < ln; i++)
    {
        cout << "\nEnter Details For Lawyer" << i + 1 << ":";
        l[i].accept();
    }
    cout << "\nWhat Do You Want To Search For1.Doctor2.Lawyer\nEnterYourChoice:";
    cin >> i;
    if (i == 1)
    d[0].search();
    else if(i == 2)
    l[0].search();
    for (i = 0; i < ln; i++)
    {
        cout << "\nDetails For Lawyer" << i + 1 << ":";
        l[i].display();
    }
    for (i = 0; i < dn; i++)
    {
        cout << "\nDetails For Doctor" << i + 1 << ":";
        d[i].display();
    }
    return 0;
}
