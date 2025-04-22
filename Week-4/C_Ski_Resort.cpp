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
    vector<ll>res;

    while (i<n)
    {
        if(v[i] <= q){
            sum++;
        }
        
        i++;
        
        while(i < n && v[i] > q){
            if(sum > 0){
                if(sum >= k){
                    // res.push_back( (sum * (sum+1) /2));
                    ll len = sum - k + 1;
                    res.push_back((len * (len + 1)) / 2);
                }
                
                sum =0;
            }
            i++;
        }
        
    }

    if(sum > 0 ) {
        if(sum >= k){
            // res.push_back( (sum * (sum+1) /2));
            ll len = sum - k + 1;
            res.push_back((len * (len + 1)) / 2);
        }
    }

    ll result =0;

    for(auto x : res){
        result += x;
    }
    cout << result << endl;
    
  }
  
  return 0;
}
