#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        ll res = 1;

        for (int i = 0; i < n; ++i)
        {

            ll coice = a[i] - i;
            if (coice <= 0)
            {
                res = 0;
                break;
            }
            res = (res * coice) % 998244353;
        }

        cout << res << endl;
    }

    return 0;
}
