#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;
    map<int,int> mp;
    vector<int> v;

    for(int i=0; i<n; i++){
        int x;
        cin >> x;

        mp[x]++;
        v.push_back(x);
    }

    // int mx = INT_MIN;
    // int minElement = INT_MAX;
    // int maxElement = INT_MIN;

    // for(auto x : mp){
    //   cout << x.first << " " << x.second << endl;
    //     // mx = max(x.second, mx);
    //     // minElement = min(x.first, minElement);
    //     // maxElement = max(x.first,maxElement);
    // }

    sort(v.begin(), v.end());
    int result =0;

    // for(auto x : v){
    //   if(mp.count(x+1) && mp[x] > 0){
    //     mp[x]--;
    //   }else{
    //     result++;
    //   }
    // }

    for(int i=0; i<n; i++){
      //   2       3
      if(v[i+1] == v[i]+1 || v[i]  == v[i+1] ){
        result++;
      }
    }

    cout << result <<  endl;
  }
  
  return 0;
}
