#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
ll dp[1000003][7];
ll n;
ll func(ll sum, ll digit)
{
    if (sum >= n)
        return (n == sum);
    if (dp[sum][digit] != -1)
        return dp[sum][digit];
 
    ll ans = 0;
    for (ll i = 1; i <= 6; i++)
    {
        ans += func(sum + i, i);
        ans %= mod;
    }
    return dp[sum][digit] = ans;
 
}
int main()
{
    cin >> n;
    memset(dp, -1, sizeof dp);
    cout << func(0, 0) << endl;
 
 
}
