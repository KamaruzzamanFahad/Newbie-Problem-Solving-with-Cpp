#include <bits/stdc++.h>
using namespace std;

#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        ll x;
        cin >> n >> x;

        vector<ll> a(n), b(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; ++i)
        {
            cin >> b[i];
        }

        priority_queue<ll> bspaiie;

        for (int i = 0; i < n; ++i)
        {
            ll parraie = bspaiie.size();
            while (!bspaiie.empty() && (x - parraie < a[i]))
            {
                bspaiie.pop();
                parraie--;
            }
            if (x - parraie >= b[i])
            {
                bspaiie.push(b[i]);
            }
        }
        cout << bspaiie.size() << endl;
    }
    return 0;
}
