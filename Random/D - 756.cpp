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
#define ll128 __int128

int32_t main()
{
    MTK;
    int n;
    cin >> n;
    ll128 ans = 1;
    ll res = 0;
    for (int i = 1; i <= n; i++)
    {
        ans = ans * i;
        if (ans % 75 == 0)
        {
            while (ans % 75 == 0)
            {
                res++;
                ans /= 75;
            }
        }
    }
    cout << res << '\n';
}
