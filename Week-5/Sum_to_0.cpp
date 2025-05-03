#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        if (n == 1)
        {
            cout << -1 << endl;
        }
        else if (n % 2 == 0)
        {
            for (int i = 0; i < n / 2; ++i)
            {
                cout << "3 -3 ";
            }
            cout << endl;
        }
        else
        {
            for (int i = 0; i < (n - 3) / 2; ++i)
            {
                cout << "3 -3 ";
            }
            cout << "1 2 -3" << endl;
        }
    }

    return 0;
}
