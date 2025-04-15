#include<bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n,m;
  cin >> n >> m;

  vector<int> v(n), feq(n+1);
  for(int i=0; i<n; i++){
    cin >> v[i];
  }

  set<int> st;
  for(int j=n; j>=1; j--){
    
    st.insert(v[j-1]);

    feq[j] = st.size();
  }

  for(int k=0; k<m; k++){
    int x;
    cin >> x;

    cout << feq[x] << endl;
  }




  return 0;
}
