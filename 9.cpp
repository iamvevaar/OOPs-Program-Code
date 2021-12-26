#include <iostream>
using namespace std;
void swap(int &a, int &b);
void swap(char &c, char &d);
void swap(float &e, float &f);
int main()
{
    int x1, y1;
    char x2, y2;
    float x3, y3;
    cout << "\nEnter two integers:";
    cin >> x1 >> y1;
    cout << "\nEnter two characters:";
    cin >> x2 >> y2;
    cout << "\nEnter two floating point numbers:";
    cin >> x3 >> y3;
    cout << "\nIntegers before swapping are:";
    cout << "x1=" << x1 << " " << "y1=" << y1;
    swap(x1, y1);
    cout << "\nIntegers after swapping are:";
    cout << "x1=" << x1 << " "<< "y1=" << y1;
    cout << "\ncharacters before swapping are:";
    cout << "x2=" << x2 << " "<< "y2=" << y2;
    swap(x2, y2);
    cout << "\ncharacters after swapping are:";
    cout << "x2=" << x2 << " "<< "y2=" << y2;
    cout << "\nfloating point numbers before swapping are:";
    cout << "x3=" << x3 << " "<< "y3=" << y3;
    swap(x3, y3);
    cout << "\nfloating point numbers after swapping are:";
    cout << "x3=" << x3 << " "<< "y3=" << y3;
    return 0;
}

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void swap(char &c, char &d)
{
    char temp;
    temp = c;
    c = d;
    d = temp;
}
void swap(float &e, float &f)
{
    float temp;
    temp = e;
    e = f;
    f = temp;
}
