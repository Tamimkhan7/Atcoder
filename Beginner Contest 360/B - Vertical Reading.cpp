#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007

int32_t main()
{
    MTK;
    string s, t;
    cin >> s >> t;
    int q = 100, x = 2;
    while (q--)
    {
        string ans = "";
        for (int i = 0; i < s.size(); i += x)
        {
            ans += s[i];
            if (ans == t)
            {
                cout << "Yes" << '\n';
                return 0;
            }
        }
        // cout << ans << ' ';
        ans = "";
        for (int i = 1; i < s.size(); i += x)
        {
            ans += s[i];
            if (ans == t)
            {
                cout << "Yes" << '\n';
                return 0;
            }
        }
        // cout << ans << '\n';
        x++;
    }
    cout << "No" << '\n';
    return 0;
}