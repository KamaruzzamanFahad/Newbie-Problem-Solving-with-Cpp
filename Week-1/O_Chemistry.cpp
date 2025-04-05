#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    unordered_map<char,int> fq;
    for(auto c : s){
        fq[c]++;
    }
    int odd=0;
    for(auto x  : fq){
        if(x.second % 2 != 0){
            odd++;
        }
    }
    if(odd <= k+1) cout << "YES";
    else cout << "NO";
    cout << endl;
  }
  return 0;
}
