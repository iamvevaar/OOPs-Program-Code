#include <string.h>
#include <iostream>
#include <iomanip>
using namespace std;
class object
{
    int q , size;
    char brand[20];
    float price, tprice;
public:
    int prod_id;
    object()
    {
        q = prod_id = size = 0;
        strcpy(brand, "\0");
        price = tprice = 0.0;
    }
    void operator *(int n)
    {
        q = n;
        tprice = price * n;
    }
    float operator + (float gr)
    {
        gr = gr + tprice;
        return gr;
    }
    void acc();
    void print();
}*p[3];

void object::acc()
{
    cout << "\nEnterProduct_Id:";
    cin >> prod_id;
    cout << "\nEnterBrand:";
    fflush(stdin);
    gets(brand);
    cout << "\nEnterSize:";
    cin >> size;
    cout << "\nEnterPrice:";
    cin >> price;
}

void object::print()
{
    cout << "\nProductId:" << prod_id << "\t\tBrand:" << brand << "\tSize:" << setfill('0') << setw(2) << size << "\tPrice:" << price;
    if (q != 0)
        cout << "\tQUANTITY:" << q;
}

class shoes : public object{
    public :
        shoes(){
            cout << "\nEnterDetailsForShoe:\n";
            acc();
}
int returnid()
{
    return prod_id;
}

void display()
{
    cout << "\nDISPLAYINGSHOEDETAILS:-\n";
    print();
}
};

class belts : public object{
    public :
        belts(){
            cout << "\nEnterDetailsForBelt:\n";
acc();
}
int returnid()
{
    return prod_id;
}
void display()
{
    cout << "\nDISPLAYINGbeltDETAILS:-\n";
    print();
}
};

class caps : public object{
    public :
        caps(){
            cout << "\nEnterDetailsForCap:\n";
acc();
}
int returnid()
{
    return prod_id;
}
void display()
{
    cout << "\nDISPLAYINGcapDETAILS:\n";
    print();
}
};

int main()
{
    int i, id, n;
    float gr = 0.0;
    shoes s[1];
    belts b[1];
    caps c[1];
    cout << "\nOptionsForBuying";
    cout << "\n\n------SHOES------";
    for (i = 0; i < 1; i++)
        s[i].display();
    cout << "\n\n------BELTS------";
    for (i = 0; i < 1; i++)
        b[i].display();
    cout << "\n\n------CAPS------";
    for (i = 0; i < 1; i++)
        c[i].display();
    cout << "\nSelectbyputtingidandquantityforshoes:\n";
    cin >> id >> n;
    for (i = 0; i < 1; i++)
        if (s[i].returnid() == id)
        {
            p[0] = &s[i];
            *p[0] * n;
            break;
        }
        else
        {
            p[0] = &s[0];
            *p[0] * 0;
        }
    cout << "\nSelectbyputtingidandquantityforbelts:\n";
    cin >> id >> n;
    for (i = 0; i < 1; i++)
        if (b[i].returnid() == id)
        {
            p[1] = &b[i];
            *p[1] * n;
            break;
        }
        else
        {
            p[1] = &b[0];
            *p[1] * 0;
        }
    cout << "\nSelectbyputtingidandquantityforcaps:";
    cin >> id >> n;
    for (int i = 0; i < 1; i++)
        if (c[i].returnid() == id)
        {
            p[2] = &c[i];
            *p[2] * n;
            break;
        }
        else
        {
            p[2] = &c[0];
            *p[2] * 0;
        }
    for (int i = 0; i < 3; i++)
    {
        p[i]->print();
        gr = *p[i] + gr;
    }
    cout << "\n\n\tGRAND TOTAL:" << gr;
    return 0;
}
