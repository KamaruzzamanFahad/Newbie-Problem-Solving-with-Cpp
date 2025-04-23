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

    int i=0, zero =0, one =0;
    char prev= '#';

    while (i<n)
    {
        
        if((prev == '#' || prev == '0') && s[i] =='1'){
            one++;
        }
        if((prev == '#' || prev == '1') && s[i] =='0'){
            zero++;
        }

        prev = s[i];
        i++;
       
        
    }
    cout << min(zero,one) << endl;
    
  }
  
  return 0;
}
