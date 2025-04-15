#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
  int t;
  cin >> t;

  int customerNumer =1;
  vector<int> ans;

  set<pair<int,int>> st;
multiset<pair<int,int>> ms;

  while (t--)
  {
    int type,money;
    cin >> type;

    if(type ==1){
      cin >> money;
        st.insert({customerNumer, money});
        ms.insert({money, -customerNumer});
        customerNumer++;
    }else if(type ==2){
        auto it =  st.begin();
        int pos = it->first;
        int money = it->second;
        ans.push_back(pos);

        st.erase(it);
        ms.erase({money, -pos});

    }else if(type ==3){
        auto it  = --ms.end();
        int pos = -it->second;
        int money = it->first;
        ans.push_back(pos);

        ms.erase(it);
        st.erase({pos, money});
        
    }
  }

  for(auto x : ans){
    cout << x << " ";
  }
  
  return 0;
}
