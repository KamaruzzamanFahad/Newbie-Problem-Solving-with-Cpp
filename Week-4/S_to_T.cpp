#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    string s,t;
    cin >> s >> t;

    int result =0;
    vector<int> v;


    for(int i=0; i<n; i++){

        if(s[i] != t[i]){
            if(s[i] == '1'){
                s[i+1] = (s[i+1] == '0') ? '1' : '0';
                v.push_back(i+1);
            }else{
                cout << -1 << endl;
                break;
            }
        }
    }

    if(s==t){
        cout << v.size() << endl;
        if(!v.empty()){
            for(auto x : v){
                cout << x << " ";
            }
            cout << endl;
        }
    }



  }
  
  return 0;
}
