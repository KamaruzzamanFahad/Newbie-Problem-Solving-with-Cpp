#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t; 

  while (t--)
  {
    int x,y,z;
  cin >> x >> y >>z;

  if(x*y <= (z*24*60)) cout << "YES";
  else cout << "NO";
  cout << endl;
  }
  
  return 0;
}
