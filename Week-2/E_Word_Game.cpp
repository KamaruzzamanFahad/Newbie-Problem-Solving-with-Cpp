#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;

  while(t--){
    int n;
    cin >> n;

    map<string, vector<int>> mp;

    for(int i=1; i<=3; i++){
        for(int j=1; j<=n; j++){
            string s;
            cin >> s;
            mp[s].push_back(i);
        }
    }

    int result[4] = {0, 0, 0,0};

    for(auto x : mp){

        if(x.second.size() <3){
          if(x.second.size() == 1){
            result[x.second[0]] +=3;
          }else{
            result[x.second[0]] +=1;
            result[x.second[1]] +=1;
          }
        }
    }

    cout << result[1] << " " << result[2] << " " << result[3] << endl;
  }
  return 0;
}
