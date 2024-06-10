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
const int N = 2e5;
int a[N], pre[N];
int32_t main()
{
    MTK;
    int n, k;
    cin >> n >> k;

    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= n; i++)
        pre[i] = pre[i - 1] + a[i];
    for (int i = 1; i <= n; i++)
        cout << pre[i] << ' ';
    cout << '\n';
    int cnt = 0;
    for (int i = 0; i <= n; i++)
    {
        if (pre[i] >= k)
            cnt++;
    }
    cout << cnt << '\n';
    if (cnt > 1)
        cout << "No" << '\n';
    else
    {
        cout << "Yes" << '\n';
        sort(a + 1, a + n + 1);
        for (int i = 1; i <= n; i++)
            cout << a[i] << ' ';
        cout << '\n';
    }
    return 0;
}