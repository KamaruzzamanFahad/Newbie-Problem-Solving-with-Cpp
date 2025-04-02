#include<bits/stdc++.h>
using namespace std;

int main(){
  string a,b;
  cin >> a >> b;

  int len = max(a.length(), b.length());
  
  int count =0;
  for(int i=0; i<len; i++){
    if(a[i] != b[i]) count++;
  }
  cout << count;
  return 0;
}
