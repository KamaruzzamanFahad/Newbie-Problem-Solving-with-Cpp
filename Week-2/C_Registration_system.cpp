#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;

  map<string,int> mp;

  while(t--){
    string s;
    cin >> s;

    if(mp.find(s) == mp.end()){
        mp[s] = 1;
        cout << "OK" << endl;
       
    }else{
        string newstr = s+to_string(mp[s]);
        cout << newstr << endl;
        mp[s]++;
        mp[newstr] = 1;
    }
  }
  return 0;
}
