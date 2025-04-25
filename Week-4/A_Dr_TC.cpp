#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int coutnt_1 =0;
    for(char x : s){
        if(x == '1'){
            coutnt_1++;
        } 
    }

    int result = coutnt_1 * (n - 1) + (n - coutnt_1);
    cout << result << endl;
  }
  
  return 0;
}
