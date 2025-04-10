#include<bits/stdc++.h>
using namespace std;

int main(){
  int a,b,c,d;
  cin >> a >> b>> c >> d;
  pair<int,int> grid ={0,0};
  grid.first+=a-c;
  grid.second+=b-d;
  cout << grid.first << " " << grid.second << endl;

  return 0;
}
