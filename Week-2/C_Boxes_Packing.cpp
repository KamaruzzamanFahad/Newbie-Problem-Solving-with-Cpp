#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
  int n;
  cin >> n;
  map<int,int> mp;
  
  for(int i=0; i<n; i++){
    int num;
    cin >> num;
    mp[num]++;
  }

  int mx = INT_MIN;

  for(auto x : mp){
    mx = max(mx,x.second);
  }


  cout << mx << endl;
  return 0;
}
