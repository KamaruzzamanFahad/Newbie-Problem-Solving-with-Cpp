#include<bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;

  while(t--){
    int n;
    cin >> n;
    vector<int> v(n);

    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    map<int,int>mp;
    int left=0;
    

    for(int i=n-1; i>=0; i--){

        if(mp.find(v[i]) != mp.end()){
            left = i+1;
            break;
        }else{
            mp[v[i]]++;
        }
    }

    cout << left << endl;
  }
  return 0;
}
