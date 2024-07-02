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
    int n = s.size();
    int m = t.size();
    for (int w = 1; w < n; w++)
    {
        for (int c = 1; c <= w; c++)
        {
            string ans = "";
            for (int i = 0; i < n; i += w)
            {
                if ((i + c - 1) < n)
                    ans += s[i + c - 1];
                if (ans.size() > m)
                    break;
            }
            if (ans == t)
            {
                cout << "Yes" << '\n';
                return 0;
            }
        }
    }
    cout << "No" << '\n';
}
