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
        int n, a, b, c, d;
        cin >> n >> a >> b >> c >> d;

        ll mxcoin = 0;

        for (int cnt0 = 0; cnt0 <= n; cnt0++)
        {
            int count1 = n - cnt0;

            ll coin1 = cnt0 * a + count1 * b + cnt0 * count1 * c;

            ll coin2 = cnt0 * a + count1 * b + cnt0 * count1 * d;

            mxcoin = max(mxcoin, max(coin1, coin2));
        }

        cout << mxcoin << endl;
    }

    return 0;
}
