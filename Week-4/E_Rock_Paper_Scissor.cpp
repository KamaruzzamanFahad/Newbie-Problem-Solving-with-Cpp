#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    int Chef =0,Chefina =0 ;

    string s1,s2;
    cin >> s1 >> s2;

    for(int i=0; i<n; i++){
        if (s1[i] == 'R' && s2[i] == 'S') {
            Chef++;
        } else if (s1[i] == 'S' && s2[i] == 'P') {
            Chef++;
        } else if (s1[i] == 'P' && s2[i] == 'R') {
            Chef++;
        } else if (s1[i] == 'S' && s2[i] == 'R') {
            Chefina++;
        } else if (s1[i] == 'P' && s2[i] == 'S') {
            Chefina++;
        } else if (s1[i] == 'R' && s2[i] == 'P') {
            Chefina++;
        }
    }

    if(Chef > Chefina){
        cout << 0 << endl;
    }else{
        cout << ((Chefina - Chef) / 2 + 1) << endl;
    }


  }
  
  return 0;
}
