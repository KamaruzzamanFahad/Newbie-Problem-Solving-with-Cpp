#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int mn = INT_MAX, mx = INT_MIN;

    for(int i=0; i<n; i++){
        int x;
        cin >> x;

        mn = min(mn,x);
        mx = max(mx,x);
    }
    if(mn == mx) cout << 0 << endl;
    else cout << (mx-mn-1) << endl;
  }
  
  return 0;
}
