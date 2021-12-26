#include <iostream>
using namespace std;

class student
{
    string name;
    int rollno, total, m1, m2, m3;
    float percentage;
public:
    void getdata()
    {
        cout << "\nEnter student's name,roll number,marks in three subjects\n";
        cin >> name >> rollno >> m1 >> m2 >> m3;
        total = m1 + m2 + m3;
        percentage = (float)total / 5;
    }
    student max(student *p, int n)
    {
        int i, mx;
        mx = p->percentage;
        for (i = 0; i < n; i++)
        {
            if (this->percentage <= p->percentage)
            {
                this->percentage = p->percentage;
                this->name = p->name;
                this->rollno = p->rollno;
                this->total = p->total;
            }
            p++;
        }
        return *this;
    }
    void display()
    {
        cout << "Name:" << name << endl;
        cout << "Roll no:" << rollno << endl;
        cout << "Total marks:" << total << endl;
        cout << "Percentage:" << percentage << endl;
    }
};

int main()
{
    student s[5], sm;
    int i;
    for (i = 0; i < 5; i++)
    {
        cout << "enter student " << i + 1 << " details";
        s[i].getdata();
    }
    sm = s[0].max(s, 5);
    cout << "\nStudent having highest percentage :" << endl;
    sm.display();
    return 0;
}
