#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;

  while(n--){
    int monstar;
    cin >> monstar;
    
    vector<int> health(monstar);
    int sum =0;
    int mn = INT_MAX, mx = INT_MIN;

    while(monstar--){
        int x;
        cin >> x;
        health.push_back(x);
        mn = min(mn,x);
        mx = max(mx,x);
        sum += x;
    }

    if((mx -mn) > sum) cout << sum << endl;
    else cout << (mx-mn) << endl;
  }

  return 0;
}
