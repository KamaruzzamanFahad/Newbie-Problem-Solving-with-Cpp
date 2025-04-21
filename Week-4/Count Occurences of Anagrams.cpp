#include<bits/stdc++.h>
using namespace std;

int main(){
//   string txt = "forxxorfxdofr", pat = "for";
  string txt = "aabaabaa", pat = "aaba";
  int n= txt.size(), k=pat.size();

  int l=0,r=0,ans=0;
  map<char,int> mp;

  int feq[26] ={0}, currentFeq[26]={0};

  for(auto x : pat){
    feq[x - 'a']++;
  }

  int result=0;

  while (r<n)
  { 
    currentFeq[txt[r] - 'a']++; 

    if(r-l+1 == k){
        bool isSame = true;
        for(int i=0; i<26; i++){
            if(feq[i] != currentFeq[i]){
                isSame=false;
                break;
            }
        }
        if(isSame){
            result++;
        }

        currentFeq[txt[l] - 'a']--;
        l++;
    }
    r++;
  }

  cout << result;
  
  return 0;
}
