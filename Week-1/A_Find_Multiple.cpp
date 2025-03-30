#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;

    int ans = (a%c == 0) ? a : (a+(c-a %c));
    cout << ((ans <=b) ? ans : -1);
}