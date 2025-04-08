#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  cin >> n >> m;

  unordered_map<string,pair<string,string>>mp;
  vector<pair<string,string>> v;

  for(int i=0; i<n; i++){
    string name,ip;
    cin >> name >> ip;
    mp.insert({ip, {name,""}});
  }

  for(int i=0; i<m; i++){
    string name,ip;
    cin >> name >> ip;
    ip.pop_back();
    mp[ip].second = name;
    v.push_back({name,ip});
    
  }

  for(auto x : v){
    cout << x.first << " " << x.second << "; #" <<  mp[x.second].first << endl;
  }




  return 0;
}
