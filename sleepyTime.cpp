#include <iostream>

using namespace std;
void calcSleepHour(int h_getup, int m_getup, int h, int m)
{
    int h_sleep = h_getup - h;
    int m_sleep = m_getup - m;
    if (m_sleep < 0)
    {
        m_sleep += 60;
        h_sleep -= 1;
    }
    if (h_sleep < 0)
    {
        h_sleep += 24;
    }
    cout << "\n\t\tYou should go to bed at " << h_sleep << ":" << m_sleep << endl;
}

int main()
{
    cout << "\n\n\t\t\tS L E E P Y T I M E -- FOR   YOUR   GOOD   SLEEPS\n\n ";
    bool check = true;
    int h_getup;
    int m_getup;
    int n;
    int h_sleep;
    int m_sleep;
    do
    {
        do
        {
            cout << "\t\tNhap gio dinh thuc day: ";
            cin >> h_getup;

            cout << "\t\tNhap phut: ";
            cin >> m_getup;

            cout << "\t\tChon so chu ky ngu (3-6 chu ky se giup ban tinh tao nhat co the): ";
            cin >> n;

        } while (h_getup >= 24 || h_getup < 0 || m_getup < 0 || m_getup >= 60 || n > 6 || n < 3);

        switch (n)
        {
        case 3:
        {
            calcSleepHour(h_getup, m_getup, 4, 44);
            break;
        }
        case 4:
        {
            calcSleepHour(h_getup, m_getup, 6, 14);
            break;
        }
        case 5:
        {
            calcSleepHour(h_getup, m_getup, 7, 44);
            break;
        }
        case 6:
        {
            calcSleepHour(h_getup, m_getup, 9, 14);
            break;
        }
        }
        char ans;
        cout << "\n\t\tC o n t i n u e? (y / n)  ";
        cin >> ans;
        if (ans != 'y' && ans != 'y')
            check = false;
    } while (check);
    return 0;
}