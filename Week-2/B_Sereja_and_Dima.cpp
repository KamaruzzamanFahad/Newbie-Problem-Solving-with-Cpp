#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;

  vector<int> v(n);

  for(int i=0; i<n; i++){
    cin >> v[i];
  }
  int leftsum =0, rightsum=0;

int who = true;
int l = 0, r = n - 1;
  while(l <= r){

    int mx;
    if(v[l] > v[r]){
        mx = v[l];
        l++;
    }else{
        mx = v[r];
        r--;
    }
    
  if(who){
    leftsum+= mx;
    who = false;
  }else{
    rightsum+= mx;
    who = true;
  }
  }

    cout << leftsum << " " << rightsum;

  

  return 0;
}
