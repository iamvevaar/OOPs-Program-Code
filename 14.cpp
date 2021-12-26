#include <iostream>
using namespace std;
class powerdev
{
    char type[15], range[10], typepow[20];
public:
    bool flag1, flag2;
    powerdev()
    {
        flag1 = false;
        flag2 = false;
    }
    void acc()
    {
        if (!flag1)
        {
            cout << "\n\nEnterDetailsofpowerdevice";
            cout << "\nEnterType(electronic/mechanical):";
            fflush(stdin);
            gets(type);
            cout << "Enterpowerrange(15w-20w):";
            fflush(stdin);
            gets(range);
            cout << "EnterPowerType(self-powered/adapter):";
            fflush(stdin);
            gets(typepow);
            flag1 = true;
        }
    };
    void dis()
    {
        if (!flag2)
        {
            cout << "\n\nDetailsofpowerdevice";
            cout << "\nType:";
            fflush(stdout);
            puts(type);
            cout << "\nPowerrange(15w-20w):";
            fflush(stdout);
            puts(range);
            cout << "\nPowerType(self-powered/adapter):";
            fflush(stdout);
            puts(typepow);
            flag2 = true;
        }
    }
};
class scanner : public virtual powerdev
{
    int nop, resol1, resol2, size, cost;
    char brand[20];
public:
    void accept1()
    {
        acc();
        cout << "\n\nEnterDetailsofScanner";
        cout << "\nEnterNoOfPages/second:";
        cin >> nop;
        cout << "\nEnterResolution1:";
        cin >> resol1;
        cout << "\nEnterResolution2:";
        cin >> resol2;
        cout << "\nEnterSize:";
        cin >> size;
        cout << "\nEnterBrand:";
        fflush(stdin);
        gets(brand);
    }
    void disp1()
    {
        dis();
        cout << "\n\nDetailsofScanner";
        cout << "\nNoOfPages/second:" << nop;
        cout << "\nResolution:" << resol1 << "x" << resol2;
        cout << "\nSize:" << size;
        cout << "\nBrand:" << brand;
    }
};
class printer : public virtual powerdev
{
    int nop, dpi;
    char brand[20], color[10], type[10];

public:
    void accept2()
    {
        acc();
        cout << "\n\nEnterDetailsofPrinter";
        cout << "\nEnterNoOfPages/second:";
        cin >> nop;
        cout << "\nEnterDPI:";
        cin >> dpi;
        cout << "\nEnterBrand:";
        fflush(stdin);
        gets(brand);
        cout << "EnterColor(coloured/black-white):";
        fflush(stdin);
        gets(color);
        cout << "EnterType(laser/inkjet):";
        fflush(stdin);
        gets(type);
    }
    void disp2()
    {
        dis();
        cout << "\n\nDetailsofPrinter";
        cout << "\nNoOfPages/second:" << nop;
        cout << "\nDPI:" << dpi;
        cout << "\nColor:" << color;
        cout << "\nType:" << type;
        cout << "\nBrand:" << brand;
    }
};
class copier : public scanner, public printer
{
    int store, speed;

public:
    void enter()
    {
        cout << "\nEnterCopierDetails";
        accept1();
        accept2();
        cout << "\nEnterSpeed/second:";
        cin >> speed;
        cout << "\nEnterStorageCapacity:";
        cin >> store;
    }
    void display()
    {
        cout << "\nCopierDetails:";
        disp1();
        disp2();
        cout << "\nSpeed/persecond:" << speed;
        cout << "\nStorageCapacity:" << store;
    }
}c;
int main()
{
    c.enter();
    c.display();
    return 0;
}
