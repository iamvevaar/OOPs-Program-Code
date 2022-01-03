#include <iostream>
#include <string.h>
#define max 5
using namespace std;
int i = 0;
template<class T>
class student
{
    T data[30];

public:
    void insert()
    {
        cout << "\nEnter name or roll number of student:";
        fflush(stdin);
        cin>>data;
    }
    int search(char s2[30])
    {
        if (strcmp(data, s2) == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    void delet(student &p)
    {
        student temp;
        strcpy(temp.data, p.data);
        strcpy(p.data, data);
        strcpy(data, temp.data);
    }
    void display();
};
template <class T>
void student<T>::display()
{
    fflush(stdout);
    cout << "\nStudent Name/Numberis:" << data << endl;
}

int main()
{
    student<char> st [max];
    int ch, j, a = 0;
    while (1)
    {
        cout << "\n Enter your choice:\n1.Insert\n2.Delete\n3.Display\n4.Update\n5.Exit\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            if (i < max)
            {
                st[i].insert();
            }
            i++;
            cout << "\nData insert successfully\n";
            break;
        case 2:
            if (i == 0)
            {
                cout << "\nPlease enter data first\n";
            }
            else
            {
                char s[30];
                cout << "Enter name /roll number to delete:";
                fflush(stdin);
                cin >> s;
                for (j = 0; j < i; j++)
                {
                    a = st[j].search(s);
                    if (a == 1)
                        do
                        {
                            st[j].delet(st[j + 1]);
                            j++;
                        } while (j < i);
                }
                if (a == 0 && j == i)
                    cout << "Not found";
                else
                {
                    cout << "\nData Deleted Successfully\n";
                    i--;
                }
            }
            break;
        case 3:
            for(j = 0; j < i; j++)
            {
                st[j].display();
            }
            break;
        case 4:
            if(i == 0)
            {
                cout << "\nPlease enter data first\n";
            }
            else
            {
                char s[30];
                cout << "Enter name/roll number to Update:";
                fflush(stdin);
                cin >> s;
                for (j = 0; j < i; j++)
                {
                    a = st[j].search(s);
                    if (a == 1)
                    {
                        st[j].insert();
                        break;
                    }
                }
                if(a == 0)
                    cout << "Not found";
                else
                    cout << "\nData Updated Successfully\n";
            }
            break;
        case 5:
            exit(0);
        default:
            cout << "Invalid Input";
        }
    }
}
