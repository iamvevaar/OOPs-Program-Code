#include <iostream>
using namespace std;
#define max 5
class student
{
    int age;
    char name[20];
    int mob;
public:
    int flag;
    student()
    {
        fflush(stdin);
        cout << "\nENTER THE NAME OF THE STUDENT:";
        gets(name);
        cout << "\nENTER THE AGE:";
        cin >> age;
        cout << "\nENTER THE MOBILE NUMBER(4digit):";
        cin >> mob;
        flag = 1;
        checkprime();
    }
    void checkprime();
    void display() const;

    int returnflag()
    {
        return flag;
    }
};

void student::display() const
{
    fflush(stdout);
    cout << "\nNAME OF THE STUDENT:";
    puts(name);
    cout << "AGE:";
    cout << age;
    cout << "\nMOBILE NUMBER:";
    cout << mob;
}
void student::checkprime()
{
    int i;
    for (i = 2; i < mob/2 ; i++)
    {
        if (mob % i == 0)
        {
            flag = 0;
            break;
        }
    }
}

int main()
{
    int i;
    const student s[max];
    cout << "\n DETAILS OF STUDENT WITH PRIME MOBILE NUMBERS:";
    for (i = 0; i < max; i++)
    {
        if(s[i].flag == 1)
        s[i].display();
    }
    return 0;
}
