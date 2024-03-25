#include <bits/stdc++.h>
using namespace std;

#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
#define all(x) x.begin(), x.end()
#define mod 1000000007

int32_t main()
{
    MTK;
    ll n, k;
    cin >> n >> k;
    set<ll> s;
    for (int i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        s.insert(x);
    }
    ll ans = (1LL * k * (k + 1)) / 2; // first k value sum
    // cout << ans << '\n';
    for (auto x : s)
    {
        if (1 <= x and x <= k)
            ans -= x;
    }
    cout << ans << '\n';
    return 0;
}
