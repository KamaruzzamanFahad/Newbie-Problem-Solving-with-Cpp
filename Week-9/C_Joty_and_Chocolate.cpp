#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll lcm(ll a, ll b)
{
    return (a / __gcd(a, b)) * b;
}

int main()
{
    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;

    ll common = n / lcm(a, b);
    ll only_a = (n / a) - common;
    ll only_b = (n / b) - common;

    ll ans = only_a * p + only_b * q + common * max(p, q);
    cout << ans << endl;

    return 0;
}
