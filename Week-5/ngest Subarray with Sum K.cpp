#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {
        94,
        -33,
        -13,
        40,
        -82,
        94,
        -33,
        -13,
        40,
        -82,
    };
    int k = 52;

    long long sum = 0, ans = INT_MIN;

    map<long long, int> mp;

    for (long long i = 0; i < arr.size(); i++)
    {
        sum += arr[i];

        if(sum == k){
            ans = i+1;
        }

        if (mp.find(sum) == mp.end())
        {
            mp[sum] = i;
        }

        

        if (mp.find(sum - k) != mp.end())
        {
            ans = max(ans, (i - mp[sum - k]));
        }
    }
    cout << (ans == INT_MIN ? 0 : ans) << endl;
    return 0;
}
