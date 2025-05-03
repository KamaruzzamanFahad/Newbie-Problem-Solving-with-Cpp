#include<bits/stdc++.h>
using namespace std;

int main(){
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

    map<int,int> mp;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            mp[v[i]+v[j]]++;
        }
    }

  }
  
  return 0;
}
