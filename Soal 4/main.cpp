#include <iostream>

using namespace std;

int main()
{
    int x, i, j, k;

    // Input
    cout << "Masukkan Jumlah Deret:";
    cin >> x;
    k = x - 1;

    //
    cout << "\nNIM\t: 220401010153\n"
         << "Nama\t: M. Ichsan Fauzan\n"
         << "Kelas\t: IT104\n";
    cout << "\nJumlah Deret: " << x << "\n";

    // Deret 1 - 1
    cout << "\nDERET KE 1:\n\n";
    for (i = 1; i < x; i++)
    {
        if (i % k != 0)
        {
            for (j = 1; j <= i; j++)
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }

    for (i = x; i >= 1; i--)
    {

        for (j = 1; j <= i; ++j)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    // Deret 1 - 2
    cout << "\nDERET KE 1:\n\n";
    for (i = 1; i < x; i++)
    {
        if (i % k != 0)
        {
            for (j = 1; j <= i; j++)
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }

    for (i = x; i >= 1; i--)
    {

        for (j = 1; j <= i; ++j)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    // Deret 2
    cout << "\nDERET KE 2:\n\n";
    for (i = x; i > 1; i--)
    {
        for (j = 1; j <= i * 2; j = j + 2)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    for (i = 1; i <= x; i++)
    {
        for (j = 1; j <= i * 2; j = j + 2)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}