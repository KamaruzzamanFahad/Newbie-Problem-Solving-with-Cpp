#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  long long s;
  cin >> n >> s;
  vector<int> a(n);
  for(int i=0; i<n; i++){
    cin >> a[i];
  }

  int l=0,r=0;
  long long ans =0, sum =0;

  while (r<n)
  {
    sum += a[r];

    if(sum <= s){
        ans += (r-l+1);
    }else{
        while (sum > s && l<r)
        {
            sum -= a[l];
            l++;
        }
        if(sum <= s){
            ans += (r-l+1);
        }
        
    }
    r++;
  }
  cout << ans << endl;
  
  return 0;
}
