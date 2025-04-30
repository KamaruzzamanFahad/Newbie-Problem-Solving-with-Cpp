#include<bits/stdc++.h>
using namespace std;
# define ll long long int
int main(){
  ll n,k;
  cin >>  n >> k;
  vector<ll> a(n);

  for( ll i=0; i<n; i++){
    cin >> a[i];
  }

  ll l=0,r=0, ans =0;
  map<ll,ll> mp;

  while (r<n)
  {
    mp[a[r]]++;

    while (mp.size() > k)
    {
        mp[a[l]]--;
        if(mp[a[l]] == 0){
            mp.erase(a[l]);
        }
        l++;
    }

    ans += (r-l+1);
    r++;
  }
  cout << ans << endl;

  return 0;
}
