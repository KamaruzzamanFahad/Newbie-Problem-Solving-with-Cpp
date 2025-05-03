#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string s, t;
        cin >> n >> s >> t;

        bool poss = true;
        int onesin_s = 0;

        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '1')
                onesin_s++;

            if (s[i] == '0' && t[i] == '1')
            {
                poss = false;
            }
        }
        if (!poss || (onesin_s - count(t.begin(), t.end(), '1')) % 2 != 0)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }

    return 0;
}
