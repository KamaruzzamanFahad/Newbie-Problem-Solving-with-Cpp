#include<bits/stdc++.h>
using namespace std;


int palindrom (string s, char c){
    int l=0, r =s.size()-1;
    int count =0;

    while(l<r){
        if(s[l] == s[r]){
            l++;r--;
        }else if(s[l] == c){
            l++;
            count++;
        }else if(s[r] == c){
            r--;
            count++;
        }else{
            return -1;
        }
    }
    return count;
}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; 
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;
    string s;
    cin  >> s;

   int ans = INT_MAX;
   for(char c='a'; c <= 'z'; c++){
    int count = palindrom(s,c);

   if(count != -1){
    ans = min(ans,count);
   }
   }

   cout <<( ans == INT_MAX ? -1 : ans )<< endl;
   

  }
  
  return 0;
}
