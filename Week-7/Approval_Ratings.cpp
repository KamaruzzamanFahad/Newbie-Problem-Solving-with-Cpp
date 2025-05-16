#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        vector<int> ratting(5);
        int sum = 0;

        for (int i = 0; i < 5; i++)
        {
            cin >> ratting[i];
            sum += ratting[i];
        }

        if (sum >= 35)
        {
            cout << 0 << endl;
            continue;
        }

        sort(ratting.begin(), ratting.end());

        int coins = 0;
        for (int i = 0; i < 5 && sum < 35; i++)
        {
            int increase = 10 - ratting[i];
            sum += increase;
            coins += 100;
        }

        cout << coins << endl;
    }

    return 0;
}
