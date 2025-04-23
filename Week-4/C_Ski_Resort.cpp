#include<bits/stdc++.h>
using namespace std;
# define ll long long int
int main(){
  int t;
  cin >>  t;

  while (t--)
  {
    ll n,k,q;
    cin >> n >> k >> q;
    vector<ll> v(n);

    for(ll i=0; i<n; i++){
        cin >> v[i];
    }

    ll i=0;

    ll sum =0;
    ll result =0;

    while (i<n)
    {
        if(v[i] <= q){
            sum++;
        }
        
        i++;
        
        while(i < n && v[i] > q){
            if(sum > 0){
                if(sum >= k){
                    // result+= ( (sum * (sum+1) /2));
                    ll len = sum - k + 1;
                    result+= ((len * (len + 1)) / 2);
                }
                
                sum =0;
            }
            i++;
        }
        
    }

    if(sum > 0 ) {
        if(sum >= k){
            // result+= ( (sum * (sum+1) /2));
            ll len = sum - k + 1;
            result+= ((len * (len + 1)) / 2);
        }
    }

    cout << result << endl;
    
  }
  
  return 0;
}
