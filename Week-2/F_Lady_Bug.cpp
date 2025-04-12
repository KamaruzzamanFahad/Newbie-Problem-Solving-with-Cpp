#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;

  while (t--)
  {
    int n; 
    cin >> n;
    
    string a,b;
    cin >> a >> b;

    int A_even_one=0;
    int B_odd_zero =0;


    int A_odd_one=0;
    int B_even_zero=0;
    

    for(int i=0; i<n; i++){
        if(a[i] == '1' && i%2 == 0){
            A_even_one++;
        }
        if(b[i] == '0' && i%2 != 0){
            B_odd_zero++;
        }


        if(a[i] == '1' && i%2 != 0){
            A_odd_one++;
        }
        if(b[i] == '0' && i%2 == 0){
            B_even_zero++;
        }


    }


    if(A_even_one <= B_odd_zero && A_odd_one <= B_even_zero  ){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }


  }
  
  return 0;
}
