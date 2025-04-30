#include<bits/stdc++.h>
using namespace std;
# define ll long long int
int main(){
  int n;
  ll s;
  cin >> n >> s;

  vector<ll> a(n);

  for(int i=0; i<n; i++){
    cin >> a[i];
  }

  ll l=0,r=0, ans = INT_MAX;
  ll sum =0;

  while (r<n)
  {
    sum += a[r];
    
    while(sum >= s){
        ans = min(ans, r-l+1);
        sum -= a[l];
        l++;
    }
    r++;
  }

  cout << (ans == INT_MAX ? -1 : ans) << endl;
  
  return 0;
}
