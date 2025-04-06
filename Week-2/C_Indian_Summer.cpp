#include<bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;

  set<pair<string,string>> leaves;

  for(int i=0; i<t; i++){
    string spesic, color;
    cin >> spesic >> color;
    leaves.insert({spesic,color});
  }

  cout << leaves.size();
  return 0;
}
