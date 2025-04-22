#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;

  while (t--)
  {
    int n,k;
  cin >> n >> k;

  int result = INT_MAX;

  for(int i=0; i<n; i++){
    int x;
    cin >> x;
   if(x>= k){
    result = min(result, x%k);
   }
  }

  cout << (result == INT_MAX ? -1 : result) << endl;

  }
  
  return 0;
}
