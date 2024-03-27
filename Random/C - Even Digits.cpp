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
long long N = 1e12+9;
bool check(string s)
{
    int cnt = 0;
    for (ll i = 0; i < s.size(); i++)
    {
        if (s[i] % 2 != 0)
        {
            cnt++;
            break;
        }
    }
    if (cnt == 0)
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
    for (ll i = 0; i < N; i += 2)
    {
        string s = to_string(i);
        if (check(s) == 1)
        {
            // cout << s << ' ';
            ll x = stoi(s);
            v.push_back(x);
            if (v.size() == (n))
            {
                // cout << '\n';
                cout << v[n - 1] << '\n';
                return 0;
            }
        }
    }
}