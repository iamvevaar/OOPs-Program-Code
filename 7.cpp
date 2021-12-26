#include <iostream>
#include <string.h>
using namespace std;

#define MAX 2
int i = 0, j = 0;
class student;
class employee
{
public:
    char name[30], id[10], address[45];
    int age;
    void getdata()
    {
        cout << "\n-------ENTER " << i + 1 << " EMPLOYEE DETAILS	\n";
        fflush(stdin);
        cout << "\nEnter Employee Name : ";
        gets(name);
        cout << "\nEnter Age : ";
        cin >> age;
        fflush(stdin);
        cout << "\nEnter Employee ID : ";
        gets(id);
    }
    void display()
    {
    fflush(stdin);
    cout << "\nEnter Address : ";
    gets(address);
    cout << "\nEmployee Name : ";
    puts(name);
    cout << "\nAge : " << age;
    cout << "\nEmployee ID : ";
    puts(id);
    cout << "\nAddress : ";
    puts(address);
    }
};

class student
{
    char name[30], course[5], address[45];
    int type;
public:
    void getdata()
    {

        cout << "\n-------ENTER " << i + 1 << " STUDENT DETAILS	\n";
        fflush(stdin);
        cout << "\nEnter Student Name : ";
        gets(name);
        fflush(stdin);
        cout << "\nEnter Course Name : ";
        gets(course);
    }
    void display()
    {
        fflush(stdin);
        cout << "\nEnter Address : ";
        cin >> address;
        fflush(stdin);
        cout << "\nEnter Type :-\nFor REGULAR Enter 1\nFor PART-TIME Enter 0\n\n";
        cin >> type;
        cout << "\nStudent Name : ";
        puts(name);
        cout << "\nCourse Name : ";
        puts(course);
        cout << "\nAddress : ";
        puts(address);
        if (type == 1)
            cout << "\nType is : Regular";

        else
            cout << "\nType is : Part-time";
    }
    friend void compare(employee &, student &);
};

void compare(employee &a, student &b)
{
    if (strcmp(a.name, b.name) == 0 && strcmp(a.address, b.address) == 0)
    {
        cout << "\nStudent " << b.name << "`s Type changed to PART-TIME.\n";
        b.type = 0;
    }
}

int main()
{
    employee e[MAX];
    student st[MAX];
    for (i = 0; i < MAX; i++)
        e[i].getdata();
    for (i = 0; i < MAX; i++)
        st[i].getdata();
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            compare(e[i], st[j]);
        }
    }
    cout << "\n-------EMPLOYEE DETAILS	\n";
    for (i = 0; i < MAX; i++)
    {
        e[i].display();
        cout << "\n";
    }
    cout << "\n-------STUDENT DETAILS	\n";
    for (i = 0; i < MAX; i++)
    {
        st[i].display();
        cout << "\n";
    }
    return 0;
}
