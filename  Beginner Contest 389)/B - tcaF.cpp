#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007

int32_t main()
{
    MTK;
    ll x;
    cin >> x;
    ll ans = 1, i = 1;
    while (1)
    {
        ans *= i;
        if (ans == x)
            break;
        i++;
    }
    cout << i << '\n';
    //cout << __lg(x) << '\n';
    return 0;
}