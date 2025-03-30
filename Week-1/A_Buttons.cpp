#include<bits/stdc++.h>
using namespace std;

int main(){
  int a,b,result =0, n=2;
  cin >> a >> b;

  while(n--){
    if(a>b){
        result+= a;
        a--;
    }else{
        result+=b;
        b--;
    }
  }
  cout << result;

  return 0;
}
