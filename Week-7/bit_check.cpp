#include <bits/stdc++.h>
using namespace std;

bool check_bit_on_oe_off(int n, int k)
{
    return (n >> k & 1);
}

void print_on_and_off_bit(int n)
{
    for (int i = 7; i >= 0; i--)
    {
        cout << check_bit_on_oe_off(n, i) << " ";
    }
}

int turn_on_a_bit(int n, int k)
{
    return (n | (1 << k));
}

int toggle_bit(int n, int k)
{
    return (n ^ (1 << k));
}
int main()
{
    //   cout << check_bit_on_oe_off(45,4);
    // print_on_and_off_bit(45);
    // cout << turn_on_a_bit(45, 4);
    // cout << toggle_bit(45, 4);
    // cout << __builtin_popcount(39); // total on bit count
    cout << __lg(39); // height set bit or first on bit position

    return 0;
}
