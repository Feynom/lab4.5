#include <iostream>
#include <iomanip>
#include <Windows.h>
#include <time.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    srand((unsigned)time(NULL));

    double x, y, r, a, b, c, d, f;

    cout << "Введіть значення 'R':"; cin >> r; cout << endl;

    for (int i = 1; i <= 10; i++)
    {
        
        cout << i << ")" << "Введіть значення 'x':"; cin >> x;
        cout << "  " << "Введіть значення 'y':"; cin >> y; cout << endl;

        a = pow((x + r), 2) + pow((y - r), 2) <= r * r;
        b = x >= 0;
        c = x <= 2 * r;
        d = y >= -r;
        f = y <= 0;

        if (a || (b && c && d && f))
            cout << "Так!" << endl;
        else
            cout << "Ні!" << endl;
            cout << endl;
    }

    cout << "Випадкові числа" << endl;

    cout << fixed;

    for (int i = 1; i <= 10; i++)
    {
        double x = (2 * (2 * r)) * rand() / RAND_MAX - (2 * r);
        double y = (2 * (2 * r)) * rand() / RAND_MAX - (2 * r);

        cout << i << ")" << "x=" << setprecision(3) <<  x << endl;
        cout << "  " << "y=" << setprecision(3) << y << endl;
        cout << endl;

        a = pow((x + r), 2) + pow((y - r), 2) <= r * r;
        b = x >= 0;
        c = x <= 2 * r;
        d = y >= -r;
        f = y <= 0;

        if (a || (b && c && d && f))
            cout << "Так!" << endl;
        else
            cout << "Ні!" << endl;
            cout << endl;
    }

    cin.get();
    return 0;
}