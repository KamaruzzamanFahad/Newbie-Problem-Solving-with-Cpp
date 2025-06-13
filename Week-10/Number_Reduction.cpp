#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;

        queue<int> q;
        set<int> viseted;
        q.push(x);

        while (!q.empty())
        {
            int curr = q.front();
            q.pop();

            if (viseted.count(curr))
                continue;
            viseted.insert(curr);

            if (curr > 3)
                q.push(curr - 3);
            if (curr % 2 == 0)
                q.push(curr / 2);
        }

        int rest = *min_element(viseted.begin(), viseted.end());

        cout << rest << endl;
    }
    return 0;
}
