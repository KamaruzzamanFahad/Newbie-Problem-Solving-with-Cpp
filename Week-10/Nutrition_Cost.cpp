#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c;
        cin >> n >> c;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        for (int i = 0; i < n; ++i)
            cin >> b[i];

        unordered_map<int, int> mncost;
        for (int i = 0; i < n; ++i)
        {
            int vitamen = a[i], cost = b[i];
            if (mncost.find(vitamen) == mncost.end())
                mncost[vitamen] = cost;
            else
                mncost[vitamen] = min(mncost[vitamen], cost);
        }

        vector<int> cost;
        for (auto it : mncost)
        {
            cost.push_back(it.second);
        }

        sort(cost.begin(), cost.end());

        int ans = 0, sum = 0;
        for (int i = 0; i < cost.size(); ++i)
        {
            sum += cost[i];
            int x = i + 1;
            ans = max(ans, c * x - sum);
        }

        cout << ans << endl;
    }
    return 0;
}
