#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;
    int result = 100 -n;
    int final = floor((result/10))*10;
    cout << final <<endl;
  }
  
  return 0;
}
