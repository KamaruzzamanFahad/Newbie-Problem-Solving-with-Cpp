#include<bits/stdc++.h>
using namespace std;

int main(){
 int t;
 cin >> t;

 while (t--)
 {
    int n,x,y;
    cin >> n >> x >> y;
   
  
  int result =0;
  
    for(int i=0; i<n; i++){
      int val;
      cin >> val;
  
      if(val*x < y){
          result += val*x;
    }else{
      result+= y;
    }
  }
  
    cout << result << endl;
  
 }
 




  return 0;
}
