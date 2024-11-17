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
// #define llx __int128
#define mod 1000000007

int32_t main()
{
    MTK;
    string s;
    cin >> s;
    int n = (int)s.size();
    // cout << s << '\n';
    int q;
    cin >> q;
    while (q--)
    {
        ll x;
        cin >> x;
        ll val = x / n;
        ll p = x % n;

        cout << s[p - 1] << ' ';
    }
    cout << '\n';
    return 0;
}