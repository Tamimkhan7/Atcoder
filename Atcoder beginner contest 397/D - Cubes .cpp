#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll long long
#define mod 1000000007

int32_t main()
{
    MTK;
    ll n;
    cin >> n;
    for (ll i = 1; i <= 1e6; i++)
    {
        ll x = i * i * i;
        int l = 1, r = 1e6;
        while (l <= r)
        {
            int mid = (1LL * l + r) / 2;
            ll z = 1LL * mid * mid * mid;
            if (x - z == n)
            {
                cout << i << ' ' << mid << '\n';
                return 0;
            }
            else if (x - z > n)
                l = mid + 1;
            else
                r = mid - 1;
        }
    }
    cout << -1 << '\n';
    return 0;
}

