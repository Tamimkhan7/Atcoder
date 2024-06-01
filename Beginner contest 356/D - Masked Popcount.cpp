#include <bits/stdc++.h>
using namespace std;

#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
#define mod 998244353

int32_t main()
{
    MTK;
    ll n, m;
    cin >> n >> m;
    ll sum = 0;

    for (int i = 0; i < 60; i++)
    {

        ll totalNumbers = (n + 1);

        ll completeBlocks = totalNumbers / (1LL << (i + 1));

        ll setBitsInCompleteBlocks = completeBlocks * (1LL << i);

        ll remainingNumbers = totalNumbers % (1LL << (i + 1));
        ll setBitsInRemaining = max(0LL, remainingNumbers - (1LL << i));
        
        ll setBitsAtI = setBitsInCompleteBlocks + setBitsInRemaining;

        if (m & (1LL << i))
            sum = (sum + setBitsAtI) % mod;
    }

    cout << sum << '\n';
    return 0;
}
