#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, apos = -1;
        cin >> n;
        string a, b;
        cin >> a >> b;

        if (a == b)
        {
            cout << "YES" << endl;
            continue;
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i] == '1')
            {
                apos = i;
                break;
            }
        }

        if (apos != -1)
        {
            bool ok = true;
            for (int i = 0; i < n; i++)
            {
                if (a[i] != b[i])
                {
                    if (apos > i)
                    {
                        ok = false;
                    }
                }
            }

            if (ok)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
