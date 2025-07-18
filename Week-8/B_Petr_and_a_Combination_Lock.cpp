#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    bool ok = false;
    for (int mask = 0; mask < (1 << n); mask++)
    {
        int sum = 0;

        for (int k = 0; k < n; k++)
        {
            if ((mask >> k) & 1)
            {
                sum += v[k];
            }
            else
            {
                sum -= v[k];
            }
        }

        if (sum % 360 == 0)
        {
            ok = true;
            break;
        }
    }
    if (ok)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
