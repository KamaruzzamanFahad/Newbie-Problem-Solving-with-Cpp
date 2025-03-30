#include<bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  set<char> st(s.begin(),s.end());

  for (char c = 'a'; c <= 'z'; c++) {
    if (st.find(c) == st.end()) {
        cout << c << endl;
        return 0;
    }
}

cout << "None" << endl;

  return 0;
}
