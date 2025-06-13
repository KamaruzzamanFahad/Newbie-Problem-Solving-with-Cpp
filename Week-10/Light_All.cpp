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
        string s;
        cin >> s;
        vector<bool> light(n, false);

        bool ok = true;

        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '0')
            {
                bool left = (i > 0 && s[i - 1] == '1' && !light[i - 1]);

                if (left)
                {
                    light[i - 1] = true;
                    continue;
                }

                bool right = (i < n - 1 && s[i + 1] == '1' && !light[i + 1]);

                if (right)
                {
                    light[i + 1] = true;
                    continue;
                }

                ok = false;
                break;
            }
        }
        cout << (ok ? "Yes" : "No");
        cout << endl;
    }

    return 0;
}
