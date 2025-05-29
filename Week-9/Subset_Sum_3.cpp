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
        vector<int> A(n);
        for (int i = 0; i < n; ++i)
            cin >> A[i];

        set<int> remaning;
        for (int i = 0; i < n; ++i)
        {
            set<int> newrem;
            newrem.insert(A[i] % 3);

            for (int r : remaning)
            {
                int new_r = (r + A[i]) % 3;
                newrem.insert(new_r);
            }

            for (int r : newrem)
                remaning.insert(r);
        }

        if (remaning.count(0))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
