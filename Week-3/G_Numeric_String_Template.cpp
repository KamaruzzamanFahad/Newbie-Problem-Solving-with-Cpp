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
    vector<int> v(n);

    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int m;
    cin >>m;

    for(int i=0; i<m; i++){
        string s;
        cin >> s;

        bool result = true;

        if(s.size() != n){
            result = false;
            
        }else{
            map<char,int> mp;
            map<int,char> mp2;
            
            for(int j=0; j<n; j++){
                mp[s[j]] = v[j];
                mp2[v[j]] = s[j];
            }


            for(int i = 0; i < n; i++) {
                if (s[i] != mp2[v[i]] || v[i] != mp[s[i]]) {
                    result = false;
                    break;
                }
            }
        }

        if(result){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }


    }
  }
  
  return 0;
}
