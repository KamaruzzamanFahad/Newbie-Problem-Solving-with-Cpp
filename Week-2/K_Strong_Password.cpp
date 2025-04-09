#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;

  while(t--){
    string s,strong;
    cin >> s;
    int ispush=0;
    strong+=s[0];

    for(int i=1; i<s.size(); i++){
        if(s[i-1]==s[i]){
            if(ispush==0){                                                                
                if(s[i]=='w'){
                    strong.push_back('x');
                }else{
                    strong.push_back('w');
                }
                
                ispush=1;
            }
        }
        strong.push_back(s[i]);
        
    }

    if(ispush==0) {
        if(strong[0]=='w'){
            strong='x'+strong;
        }else{
            strong='w'+strong;
        }
        
    }

    cout << strong << endl;
    

  }
  return 0;
}
