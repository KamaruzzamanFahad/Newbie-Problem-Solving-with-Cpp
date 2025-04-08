#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;

  while(t--){
    string s,result;
    cin >> s;

    int lowar=0, upper=0;

    for(int i=s.size(); i>=0; i--){
        char c = s[i];
        if(c== 'b'){
           lowar++;
        }else if(c== 'B'){
            upper++;
        }else if(islower(c)){
            if(lowar > 0){
                lowar--;
            }else{
                result+=c;
            }
            
        }
        else if(isupper(c)){
            if(upper > 0){
                upper--;
            }else{
                result+=c;
            }
            
        }
    }
    reverse(result.begin(), result.end());



    cout << result;
    cout << endl;
  }

  return 0;
}
