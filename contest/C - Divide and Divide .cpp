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
ll n;
vector<ll> v;
int32_t main()
{
    MTK;
    cin >> n;
    ll ans = 0;
    if (n % 2 == 0)
        n /= 2;
    else
        n = n / 2 + 1;
    while (1)
    {
        ll x, y;
        ans += n;
        if (n % 2 == 0)
        {
            x = n / 2;
            v.push_back(x);
            v.push_back(x);
        }
        else
        {
            x = n / 2;
            v.push_back(x);
            y = (n / 2) + 1;
            v.push_back(y);
        }
        sort(v.rbegin(), v.rend());
        ll mx = v[0];
        if ((v[0] == v[v.size() - 1]) and (v[0] == 1))
            break;
        v.erase(v.begin());
        n = mx;
    }
    cout << ans << '\n';
}