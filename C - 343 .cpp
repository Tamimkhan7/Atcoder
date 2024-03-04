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
int N = 1e6;
ll cube_value, n;
bool cube_value_check(ll x)
{
    if ((x * x * x) <= n)
        return true;
    else
        return false;
}
bool check(ll x)
{
    string s = to_string(x);
    string ss = s;
    reverse(all(s));
    if (s == ss)
        return true;
    else
        return false;
}
int32_t main()
{
    MTK;
    cin >> n;
    ll l = 1, r = 1e18, ans = 0, x = 1;
    while (x <= N and x<=n)
    {
        if ((check(x) == true) and  (cube_value_check(x) == true))
            ans = x;
        x++;
    }
    cout << ans << '\n';
}