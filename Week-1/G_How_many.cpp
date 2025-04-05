#include<bits/stdc++.h>
using namespace std;

int main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);

  int s,t, count=0;
  cin >> s >> t;

  for(int a=0; a<=s; a++){
    for(int b=0; b<=s; b++){
        for(int c=0; c<=s; c++){
            int sum = a+b+c ;
            int muiltiply = a*b*c;
            if(sum <=s && muiltiply <=t ){
                count++;
            }
        }
    }
  }

  cout << count;
  return 0;
}
