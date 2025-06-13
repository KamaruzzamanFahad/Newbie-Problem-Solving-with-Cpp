#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    while (q--)
    {
        int k;
        cin >> k;

        int l = 0, r = n - 1, ans = -1;

        while (l <= r)
        {
            int mid = (l + r) / 2;

            if (a[mid] >= k)
            {
                if (a[mid] == k)
                {
                    ans = mid;
                    l = mid + 1;
                }
                else
                {
                    r = mid - 1;
                }
            }
            else
            {
                l = mid + 1;
            }
        }

        cout << ans << endl;
    }
}