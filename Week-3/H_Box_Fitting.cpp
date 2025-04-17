#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
   cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, w;
        cin >> n >> w;
        multiset<int> st;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            st.insert(x);
        }

        int remainging = w;
        int height =1;

        while (!st.empty())
        {
            auto  it = st.upper_bound(remainging);

            if(it != st.begin()){
                it--;
                remainging -= *it;
                st.erase(it);
            }else{
                height++;
                remainging =w;
                
            }
            
        }

        cout << height << endl;

    }

    return 0;
}

