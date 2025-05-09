#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char,int>mp;

    for(auto x : s){
        mp[x]++;
    }

    int ans =0;
    string ss = "ABCD";
    int question = mp['?'];

    for(auto x : ss){
        int cnt = mp[x];
        ans += min(cnt,n);
    }

    cout << ans << endl;
  }
  
  return 0;
}
