#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  cin.ignore();

  while(t--){
    string s;
    
    getline(cin,s);

    stringstream ss(s);

    string word;
    string result;

    while(ss >> word){
        result+=word[0];
    }

    cout << result << endl;

  }
  return 0;
}
