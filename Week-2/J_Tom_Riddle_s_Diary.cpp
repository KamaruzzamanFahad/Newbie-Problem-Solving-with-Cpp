#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  unordered_map<string,int>mp;

  while(t--){
    string s;
    cin >> s;
    mp[s]++;

    if(mp[s] <= 1){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
    }
    
  }


  return 0;
}
