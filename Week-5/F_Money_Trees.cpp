#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        ll k;
        cin >> n >> k;
        vector<int> a(n);
        vector<ll> h(n);

        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<n; i++){
            cin >> h[i];
        }

        int l=0,r=0, ans =0;
        ll sum = 0;

        while (r<n)
        {
            if(r > 0 && h[r-1] % h[r] != 0 ){
               l = r;
               sum = 0;
            }

            sum += a[r];
            while (sum > k)
            {
                sum -= a[l];
                l++;
            }

            if(sum <= k){
                ans = max(ans, r-l+1);
            }
            r++;
            
        }
        cout << ans << endl;
        
    }

    return 0;
}
