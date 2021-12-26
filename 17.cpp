#include <iostream>
using namespace std;
static float high = 0;
class ebill
{
    int custno, curr, pre, total;
    float amt;

public:
    void getdata()
    {
        cout << "Customer no.";
        cin >> custno;
        cout << "Pre read:";
        cin >> pre;
        cout << "Current read:";
        cin >> curr;
    }
    void cal()
    {
        total = curr - pre;
        if (total >= 0 && total <= 200)
        {
            amt = total * 0.5;
        }
        else if(total >= 201 && total <= 400)
        {
            amt = 100.00 + 0.65 * (float)total;
        }
        else if(total >= 401 && total <= 600)
        {
            amt = 230.00 + 0.8 * (float)total;
        }
        else if(total >= 601)
        {
            amt = 390.00 + 1.0 * (float)total;
        }
        if (amt > high)
        {
            high = amt;
        }
    }
    void showdata()
    {
        cout << "Customer no.:" << custno;
        cout << "\nTotal units:" << total;
        cout << "\nAmount:" << amt << endl;
    }
    void highest()
    {
        if (amt == high)
        {
            cout << "\nCustomer no.:" << custno;
            cout << "\nTotal units:" << total;
            cout << "\nAmount:" << amt;
        }
    }
};
int main()
{
    int i;
    ebill e[5];
    cout << "Enter customer details:\n";
    for (i = 0; i < 3; i++)
    {
        cout << i + 1 << ".";
        e[i].getdata();
    }
    for (i = 0; i < 3; i++)
    {
        e[i].cal();
    }
    cout << "\nCustomer's database:\n";
    {
        for (i = 0; i < 3; i++)
        {
            cout << i + 1 << ".";
            e[i].showdata();
        }
    }
    cout << "\n\nHighest paying customer:";
    for (i = 0; i < 3; i++)
    {
        e[i].highest();
    }
    return 0;
}
