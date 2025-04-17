#include<bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;
    map<char,int>char1, char2;
    map<string,int> cnt;
    vector<string>v;
    


    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        cnt[s]++;
        v.push_back(s);

        char1[s[0]] ++;
        char2[s[1]] ++;
    }

    for(auto x : char1){
      cout << x.first << " " << x.second << endl;
    }
    
    cout << endl;

    for(auto x : char2){
      cout << x.first << " " << x.second << endl;
    }

   for(int i=0; i<n; i++){
    int res = char1[v[i][0]] - char2[]
   }

    
  }
  
  return 0;
}
