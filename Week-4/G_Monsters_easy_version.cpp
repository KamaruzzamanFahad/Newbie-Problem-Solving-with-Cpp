#include<bits/stdc++.h>
using namespace std;
# define ll long long int
int main(){
  ll t;
  cin  >> t;

  while (t--)
  {
    ll n;
    cin >> n;
    vector<ll> v;

    for(ll i=0; i<n; i++){
        ll x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    ll spillOne = 0;

    for(ll i=1; i<n;i++){
        if(v[i-1]+1 < v[i] ){
            spillOne += ((v[i]) - (v[i-1]+1));
            v[i] = v[i-1]+1;
        }
    }

    // for(ll i=0; i<n; i++){
    //     cout << v[i] << " ";
    // }

    cout << spillOne <<  endl;
   
}
    
  
  return 0;
}
