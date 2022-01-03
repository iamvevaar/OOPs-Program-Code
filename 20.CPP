using namespace std;
#include <conio.h>
#include <stdlib.h>
#include <fstream>
#include <iostream>
int main()
{
    ofstream f1, f2, f3;
    ifstream fi1, fi2, fi3;
    int i, n, x;
    f1.open("data.txt");
    cout << "\n Enter no.of elements you have:";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cout << "\n Enter elements" << i << ":";
        cin >> x;
        f1 << x << " ";
    }
    f1.close();
    fi1.open("data.txt");
    f3.open("even.txt");
    f2.open("odd.txt");
    for (i = 1; i <= n; i++)
    {
        fi1 >> x;
        if (x % 2 == 0)
        {

            f3 << x << " ";
        }
        else
        {
            f2 << x << " ";
        }
    }
    f3.close();
    f2.close();
    fi1.close();
    fi1.open("data.txt");
    fi2.open("odd.txt");
    fi3.open("even.txt");
    cout << "\ncontent of data file:\n";
    while (fi1)
    {
        fi1 >> x;
        cout << x << "\t";
    }
    fi1.close();
    cout << "\n Content of odd file:\n";
    while (fi2)
    {
        fi2 >> x;
        cout << x << "\t";
    }
    fi2.close();
    cout << "\ncontent of even file:\n";
    while (fi3)
    {
        fi3 >> x;
        cout << x << "\t";
    }
    fi3.close();
    cout << "\n Compelte.....";
    return 0;
}
