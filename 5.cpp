#include <iostream>
using namespace std;

class arr
{
public:
    void readarray(int *vec, int s)
    {
        int i;
        for (i = 0; i < s; i++)
            cin >> *(vec + i);
    }
    void addarray(int *a, int *b, int *c, int s)
    {
        int i;
        for (i = 0; i < s; i++)
            *(c + i) = *(a + i) + *(b + i);
    }
    void showarray(int *vec, int s)
    {
        int i;
        for (i = 0; i < s; i++)
            cout << *(vec + i) << " ";
    }
};

int main()
{
    arr a;
    int s;
    int *x, *y, *z;
    cout << "Enter size of arrays to be added:";
    cin >> s;
    x = new int[s];
    y = new int[s];
    z = new int[s];
    cout << "\nEnter element for first arr:";
    a.readarray(x, s);
    cout << "\nEnter element for second arr:";
    a.readarray(y, s);
    cout << "first arr:";
    a.showarray(x, s);
    cout << "\nSecond arr:";
    a.showarray(y, s);
    a.addarray(x, y, z, s);
    cout << "\nArray sum:";
    a.showarray(z, s);
    delete[] x;
    delete[] y;
    delete[] z;
    return 0;
}
