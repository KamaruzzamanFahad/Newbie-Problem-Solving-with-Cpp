#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;

  map<string,string> data;

  for(int i=0; i<n; i++){
    string oldname,newname;
    cin >> oldname >> newname;
    if(data.count(oldname)){
        string originalname = data[oldname];
        data.erase(oldname);
        data[newname] = originalname;
    }else{
        data[newname] = oldname;
  }
}
  cout << data.size() << endl;

  for(auto x: data){
    cout << x.second << " " << x.first << endl;
  }
  return 0;
}
