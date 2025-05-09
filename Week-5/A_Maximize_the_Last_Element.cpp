#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;

  while (t--)
  {
    int n,mx=INT_MIN;
    
    cin >> n;

    for(int i=1; i<=n; i++){
      int x;
      cin >> x;

      if(i%2 !=0){
        mx = max(mx,x);
      }
      
    }
    cout << mx << endl;

  } 

  
  return 0;
}
