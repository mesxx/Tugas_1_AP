#include <iostream>

using namespace std;

int main()
{
    int i, j;

    for (i = 1; i <= 6; i++)
    {
        if (i != 5 && i != 3)
        {
            for (j = 1; j <= i * 2; j = j + 2)
            {
                if (j != 5)
                {
                    cout << j << " ";
                }
            }
            cout << endl;
        }
    }

    return 0;
}