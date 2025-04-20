#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--){
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    int operation = 0;
    for(int i=0; i<n;){
        if(s[i] == 'B'){
            operation++;
            i += k;
        } else {
            i++;
        }
    }
    cout << operation << endl;
  }
  
  return 0;
}
