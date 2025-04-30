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

  ll r=0,l=0, sum =0, ans =0;

  while (r<n)
  {
    sum += a[r];
    
    while (sum >= s)
    {
        ans += (n-r);
        sum -= a[l];
        l++;
    }
    
    r++;
  }
  cout << ans << endl;
  
  return 0;
}
