#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;
    int count =0;

    while (n--)
    {
      int temp;
      cin >> temp;
      if(temp >= 2){
        count+=(temp-1);
      }
      
    }

    cout << count << endl;
    
  }
  
  return 0;
}
