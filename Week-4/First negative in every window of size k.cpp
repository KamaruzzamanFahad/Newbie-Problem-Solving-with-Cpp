#include<bits/stdc++.h>
using namespace std;

int main(){
  int k=2;
  vector<int> arr ={-8, 2, 3, -6, 10};

  int l=0,r=0;
  vector<int> ans;
  queue<int> q;

  while (r<arr.size())
  {
    if(arr[r] < 0){
        q.push(arr[r]);
    }

    if(r-l+1 == k){
        if(!q.empty()){
            ans.push_back(q.front());
            if(arr[l] == q.front()){
                q.pop();
            }
        }else{
            ans.push_back(0);
        }
        l++;
    }
    r++;
  }

  for(auto  x: ans){
    cout << x << " ";
  }
  

  return 0;
}
