#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int q;
    cin >> q;

    while (q--)
    {
        int l, r;
        cin >> l >> r;

        int lower = lower_bound(a.begin(), a.end(), l) - a.begin();
        int upper = upper_bound(a.begin(), a.end(), r) - a.begin();
        cout << (upper - lower) << " ";
    }

    return 0;
}
