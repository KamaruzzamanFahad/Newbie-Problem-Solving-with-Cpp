#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;

  while(t--){
    int n;
    cin >> n;
    string s1,s2;
    cin >> s1 >> s2;

    for(int i = 0; i < n; i++){
        if(s1[i] == 'G') s1[i] = 'B';
    }
    for(int i = 0; i < n; i++){
        if(s2[i] == 'G') s2[i] = 'B';
    }
    
    if(s1==s2) cout << "YES";
    else cout << "NO";
    cout << endl;
  }
  return 0;
}
