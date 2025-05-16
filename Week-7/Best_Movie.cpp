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

        int ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;

            if (a >= 7)
            {
                ans = min(ans, b);
            }
        }

        if (ans == INT_MAX)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }

    return 0;
}
