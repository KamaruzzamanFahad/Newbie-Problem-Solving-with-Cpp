#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  
  while (t--)
  {
    int n, alis,bolb;
    cin >> n >> alis >> bolb;

    if(abs(alis-bolb)%2 != 0){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
    }

  }
  
  return 0;
}
