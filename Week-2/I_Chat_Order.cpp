#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  
  map<string,int> chatlist;
  map<int,string> newchat;

  
  for(int i=1; i<=n; i++){
    string name;
    cin >> name;
    chatlist[name]=i;
  }



  for(auto x : chatlist){
    newchat[x.second] = x.first;
  }


  for(auto it = newchat.end(); it != newchat.begin(); it--){
    cout << prev(it)->second << endl;
  }
  


  return 0;
}
