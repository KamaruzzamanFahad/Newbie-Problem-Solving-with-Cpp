#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;

  while (t--)
  {
    long long a,b,n,s;
    cin >> a >> b >> n >>s;

    if( (min(s/n,a)*n)+b >= s) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
  
  return 0;
}
