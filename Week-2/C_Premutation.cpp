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
    int arr[n][n-1] ={0};

    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
            cin >> arr[i][j];
        }
    }

    map<int,int> mp;


    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
            mp[arr[i][0]] ++;
        }
    }
    vector<pair<int,int>>v;
    int most=0,munimum=0;

    for(auto x: mp){
        v.push_back({x.first,x.second});
    }

    if(v[0].second > v[1].second){
      most = v[0].first;
      munimum = v[1].first;
    }else{
      munimum= v[0].first;
      most = v[1].first;
    }

    vector<int> remaining;

    int idx =0;

    for(int i=0; i<n; i++){
      if(arr[i][0] == munimum){
        idx = i;
        break;
      }
    }

    cout << most << " " ;

    for(int i=0; i<n-1; i++){
      cout << arr[idx][i] << " ";
    }

    cout <<  endl;
  }
  
  return 0;
}
