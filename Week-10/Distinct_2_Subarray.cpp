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
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        int minLen = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            unordered_set<int> s;
            for (int j = i; j < n; j++)
            {
                s.insert(a[j]);
                if (s.size() > 2)
                    break;
                if (s.size() == 2)
                {
                    minLen = min(minLen, j - i + 1);
                    break;
                }
            }
        }

        cout << ((minLen == INT_MAX) ? -1 : minLen) << endl;
    }
    return 0;
}
