#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;
    string s;
    cin >> s;

    if(s[0] == '1' || s[n-1] == '1'){
        cout << "YES";
    }else{
        cout << "NO";
    }
    cout << endl;
  }
  
  return 0;
}
