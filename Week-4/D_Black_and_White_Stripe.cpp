#include<bits/stdc++.h>
using namespace std;

// int getMInWhite(int l, int r, string s){
//     int white =0;
//     for(int i=l; i<=r; i++){
//         if(s[i] == 'W'){
//             white++;
//         }
//     }
//     return white;
// }

int main(){
  int t;
  cin >> t;

  while (t--)
  {
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;

    int l=0,r=0, mn =INT_MAX, whiteCount =0;

    while (r<n)  
    {
        if(s[r] == 'W'){
            whiteCount++;
        }

        if(r-l+1 == k){
            // int minWhite = getMInWhite(l,r,s);
            mn = min(mn,whiteCount);
            if(s[l] == 'W'){
                whiteCount--;
            }
            l++;
        }
        r++;
    }
    cout << mn << endl;
    


  }
  
  return 0;
}
