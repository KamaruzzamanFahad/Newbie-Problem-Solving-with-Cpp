#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n; 

    if (n < 3) {
        cout << -1 << endl;
        continue;
    }

    int a = n, b = n-1 , c =n-2;

    if(2*max({a, b,c}) < a+b+c ){
        cout << (a+b+c) << endl;
    }else{
        cout << -1 << endl;
    }
  }
  
  return 0;
}
