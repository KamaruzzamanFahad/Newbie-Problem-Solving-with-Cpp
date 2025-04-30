#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;

  while (t--)
  {
    int n,x,y;
    cin >> n >> x >> y;
    int normal = ceil(n * 1.0 / x);

    int special = ceil((n-y*1.0)/x)+1;

    if(n - y <= 0){
        cout << 1 << endl;
    }else{
        cout << min(normal,special) << endl;
    }
    
    
  }
  
  return 0;
}
