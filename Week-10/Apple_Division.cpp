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

    int sum1 = 0, sum2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (sum1 > sum2)
        {
            sum2 += v[i];
        }
        else
        {
            sum1 += v[i];
        }
    }

    cout << abs(sum1 - sum2);

    return 0;
}
