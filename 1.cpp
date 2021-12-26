#include <iostream>
#include <string.h>
using namespace std;
struct state
{
    string name;
    int population;
    float lit, pci;
};

void getdata(struct state *p, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << "Enter name of state" << i + 1 << ":" << endl;
        cin >> p->name;
        cout << "Enter population of state " << p->name << endl;
        cin >> p->population;
        cout << "Enter literacy rate and per capita income of state " << p->name << endl;
        cin >> p->lit >> p->pci;
        p++;
    }
}

void maxlit(struct state *p, int n)
{
    int i;
    float maxlit;
    maxlit = p->lit;
    string nm;
    for (i = 1; i <= n; i++)
    {
        if (p->lit >= maxlit)
        {
            maxlit = p->lit;
            nm = p->name;
        }
        p++;
    }
    cout << "Literacy rate is highest for state " << nm << endl;
}
void maxpci(struct state *p, int n)
{
    int i;
    float maxpci;
    maxpci = p->pci;
    string nm;
    for (i = 1; i <= n; i++)
    {
        if (p->pci >= maxpci)
        {
            maxpci = p->pci;
            nm = p->name;
        }
        p++;
    }

    cout << "Highest per capita income is for the state " << nm << endl;
}
int main()
{
    int n;
    cout << "Enter number of states\n";
    cin >> n;
    struct state s[n];
    getdata(&s[0], n);
    maxlit(&s[0], n);
    maxpci(&s[0], n);
    return 0;
}
