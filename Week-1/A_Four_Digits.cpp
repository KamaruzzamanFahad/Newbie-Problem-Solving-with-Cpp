#include<bits/stdc++.h>
using namespace std;

int main(){
  int num;
  cin >> num;
  int len = (4-to_string(num).length());

  while(len){
    cout << 0;
    len--;
  }
  cout << num;
  return 0;
}
