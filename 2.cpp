#include <iostream>
using namespace std;
class Distance
{
    int feet, inches;

public:
    void getdata()
    {
        cin >> feet >> inches;
    }
    void sum(Distance d1, Distance d2)
    {
        feet = d1.feet + d2.feet;
        inches = d1.inches + d2.inches;
        if (inches >= 12)
        {
            feet = feet + inches / 12;
            inches = inches % 12;
        }
    }
    void displaydata()
    {
        if (inches >= 12)
        {
            feet = feet + inches / 12;

            inches = inches % 12;
        }
        cout << feet << " feet " << inches << " inches " << endl;
    }
};

int main()
{
    Distance D1, D2, D3;
    int feet, inches;
    cout << "Enter distance 1 in feets and inches :-\n";
    D1.getdata();
    cout << "Enter distance 2 in feets and inches:-\n";
    D2.getdata();
    cout << "Distance 1:";
    D1.displaydata();
    cout << "Distance 2:";
    D2.displaydata();
    D3.sum(D1, D2);
    cout << "Sum of both the distance is:";
    D3.displaydata();
    return 0;
}
