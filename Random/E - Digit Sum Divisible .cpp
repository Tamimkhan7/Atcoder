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
bool check(string s, ll x)
{
    int ans = 0;
    string sp;
    for (int i = 0; i < s.size(); i++)
    {
        sp = s[i];
        ans += stoi(sp);
    }
    if (x % ans == 0)
        return true;
    else
        return false;
}
int32_t main()
{
    MTK;
    ll n;
    cin >> n;
    vector<ll> v;
    for (ll i = 1; i <= n; i++)
    {
        ll x = i;
        string s = to_string(i);
        if (check(s, x) == 1)
        {
            // cout << x << ' ';
            v.push_back(x);
        }
    }
    cout << v.size() << '\n';
}