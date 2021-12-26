#include <iostream>
using namespace std;
class time
{
    int hr, mn, sec;

public:
    void gettime()
    {
        cin >> hr >> mn >> sec;
    }
    void sum(time *T1, time *T2)
    {
        sec = T1->sec + T2->sec;
        mn = sec / 60;
        sec = sec % 60;
        mn = mn + T1->mn + T2->mn;
        hr = mn / 60;
        mn = mn % 60;
        hr = hr + T1->hr + T2->hr;
    }
    void showtime()
    {
        if (sec >= 60)
        {
            mn = mn + sec / 60;
            sec = sec % 60;
        }
        if (mn >= 60)
        {
            hr = hr + mn / 60;
            mn = mn % 60;
        }
        cout << "Time- " << hr << ":" << mn << ":" << sec << endl;
    }
};

int main()
{
    time t1, t2, t3;
    cout << "Enter time 1 in hr:mn:sec :" << endl;
    t1.gettime ();
    cout << "Enter time 2 in hr:mn:sec :" << endl;
    t2.gettime ();
    cout << "Time 1:";
    t1.showtime ();
    cout << "Time 2:";
    t2.showtime ();
    t3.sum(&t1, &t2);
    cout << "Total time is ";
    t3.showtime();
    return 0;
}
