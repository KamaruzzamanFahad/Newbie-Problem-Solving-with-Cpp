#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;

  while (t--)
  {
    int n,k,l;
    cin >> n >> k >> l;

    map<int,multiset<int>> mp;

    while (n--)
    {
        int length,language;
        cin >> length >> language;
        mp[language].insert(length);
    }

    vector<int> v;

    if(!mp[l].empty()){
        for(auto x : mp[l]){
           v.push_back(x);
        }
    }

    if (v.size() < k) {
        cout << -1 << endl;
        continue;
    }

reverse(v.begin(), v.end());

    int result = 0;

    for(int i=0; i<k; i++){
        result += v[i];
    }

    cout << result << endl;
    
  }
  
  return 0;
}
