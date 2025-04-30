#include<bits/stdc++.h>
using namespace std;
# define ll long long int
int main(){
  int n;
  ll k;
  cin >> n >> k;
  vector<ll> a(n);

  for(int i=0; i<n; i++){
    cin >> a[i];
  }

  int l=0,r=0;
  ll ans = 0;
  multiset<ll> ml;

  while (r<n)
  {
    ml.insert(a[r]);
    int mn = *ml.begin();
    int mx = *ml.rbegin();
    if(mx-mn <= k){
        ans += (r-l+1);
    }else{
        
        while (l<r)
        {   int mn = *ml.begin();
            int mx = *ml.rbegin();
            if(mx-mn <= k){
                break;;
            }
            ml.erase(ml.find(a[l]));
            l++;
        }

        int mn = *ml.begin();
        int mx = *ml.rbegin();
        if(mx-mn <= k){
            ans += (r-l+1);
        }
        
    }
    r++;

  }
  cout << ans << endl;
  
  return 0;
}
