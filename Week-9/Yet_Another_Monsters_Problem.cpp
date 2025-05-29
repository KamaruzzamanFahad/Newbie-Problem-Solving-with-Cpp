#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end());

        int ans = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            int x = a[i];

            int live = n - (upper_bound(a.begin(), a.end(), x) - a.begin());

            int tt = x + live;
            ans = min(ans, tt);
        }

        ans = min(ans, n);

        cout << ans << "\n";
    }

    return 0;
}
