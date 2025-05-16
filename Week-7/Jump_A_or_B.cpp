#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n, m, a, b;
        cin >> n >> m >> a >> b;

        long long diffrens = a - b;
        long long total = n * b;

        long long remaning = m - total;

        if (diffrens == 0)
        {
            cout << (m == total ? "Yes" : "No") << endl;
        }
        else
        {
            if (remaning % diffrens != 0)
            {
                cout << "No" << endl;
            }
            else
            {
                long long x = remaning / diffrens;
                cout << (x >= 0 && x <= n ? "Yes" : "No") << endl;
            }
        }
    }

    return 0;
}
