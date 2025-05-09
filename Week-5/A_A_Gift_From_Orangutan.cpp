#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n; i++){
        cin >> v[i];
    }
    sort(v.rbegin(),v.rend());

    vector<int> b,c;
    

    for(int i=0; i<n; i++){
        int mn = INT_MAX, mx = INT_MIN;
        for(int j=0; j<=i; j++){
            mn = min(mn, v[j]);
            mx = max(mx, v[j]);
        }
        b.push_back(mn);
        c.push_back(mx);
    }

    int ans = 0;

    // for(int i=0; i<n; i++){
    //     cout << c[i] << " - " << b[i] << " | " ;
    // }

    // for(auto x : b){
    //     cout << x << " ";
    // }

    for(int i=0; i<n; i++){
        ans += c[i] - b[i] ;
    }

    cout << ans << endl;

  }
  
  return 0;
}
