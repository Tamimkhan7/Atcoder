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

int32_t main()
{
    MTK;
    int n, d;
    cin >> n >> d;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i] >> b[i];
    int x = 1;
    while (x <= d)
    {
        priority_queue<int> ans;
        for (int i = 0; i < n; i++)
        {
            int res = a[i] * (b[i] + x);
            // cout << res << '\n';
            ans.push(res);
        }
        cout << ans.top() << '\n';
        x++;
    }
    return 0;
}