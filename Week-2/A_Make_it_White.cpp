#include<bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >>t;

  while(t--){
    int n;
    cin >> n;
    string s;
    cin >> s;

    int first_index=-1,last_index=-1;

    for(int i=0; i<n; i++){
        if(first_index== -1 && s[i] == 'B' ){
            first_index = i;
        }

        if(s[i] == 'B' ){
            last_index = i;
        }
    }

    if(first_index==last_index) cout << 1 << endl;
    else if(first_index == 1) cout << last_index << endl;
    else cout << last_index-first_index+1 << endl;
  }
  return 0;
}
