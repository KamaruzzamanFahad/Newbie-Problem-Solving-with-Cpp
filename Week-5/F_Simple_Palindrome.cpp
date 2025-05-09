#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;
    string vowel = "uoiea",s;
     for(int i=0; i<n; i++){
        int index = i%5;
        s.push_back(vowel[index]);
     }
     cout << s << endl;
  }
  
  return 0;
}
