#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;

  while (t--)
  {
    int n,mx=INT_MIN;
    cin >> n;
    deque<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
        mx = max(mx,v[i]);
    }

    if(v.size() >= 3){
        cout << max(v[n-3], v[n-1]) << endl;
    }else{
        
        cout << v[0] << endl;
    }

  }
  
  return 0;
}
