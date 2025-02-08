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

set<ll> val_num;

void rec(ll num, bool has3, bool has5, bool has7)
{
    if (num > 1e9)
        return;
    if (has3 and has5 and has7)
    {
        //cout << num << '\n';
        val_num.insert(num);
    }

    rec(num * 10 + 3, true, has5, has7);
    rec(num * 10 + 5, has3, true, has7);
    rec(num * 10 + 7, has3, has5, true);
}

int32_t main()
{
    MTK;
    rec(0, false, false, false);
    int n;
    cin >> n;
    int ans = 0;
    for (auto num : val_num)
    {
        if (num <= n)
            ans++;
        else
            break;
    }
    cout << ans << '\n';

    return 0;
}
