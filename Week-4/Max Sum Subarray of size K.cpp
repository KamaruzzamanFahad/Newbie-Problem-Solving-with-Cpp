#include<bits/stdc++.h>
using namespace std;

int mxSum(int k, vector<int> arr){
 
    int l=0,r=0, ans =  INT_MIN, sum=0;

    while (r<arr.size())
    {   sum += arr[r];
        if(r-l+1 == k){
            ans = max(ans, sum);
            sum-= arr[l];
            l++; r++;
        }else{
            r++;
        }
        
    }
    

    return ans;

}

int main(){
  int k; 
  cin >> k;
  vector<int> v;
  
  for(int i=0; i<4; i++){
    int x;
    cin >> x;
    v.push_back(x);
  }

  cout << mxSum(k,v);
  return 0;
}
