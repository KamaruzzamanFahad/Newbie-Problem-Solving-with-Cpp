#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;
    map<char,int> mp;
    string s;
    cin >> s;

    for(auto c: s){
        mp[c]++;
    }
    vector<char> asending;
    vector<char> desending;

    for(auto x : mp){
        asending.push_back(x.first);
        desending.push_back(x.first);
    }

    reverse(desending.begin(), desending.end());

    map<char,char> mirror;

    for(int i=0; i<asending.size(); i++){
        mirror[asending[i]] = desending[i];
    }

    string newstr;

    for(auto c : s){
        newstr.push_back(mirror[c]);
    }

    cout << newstr << endl;
   
  }
  
  return 0;
}
