#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while (t--)
  {
    string s;
    cin >> s;

    if(s[s.size()-2] == 'u' && s[s.size()-1] == 's'){
        s[s.size()-2] = 'i';
        s.pop_back();
    }

    cout << s << endl;
    


  }
  
  return 0;
}
