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
    int n, m;
    cin >> n >> m;
    int a[m + 1];
    for (int i = 1; i <= m; i++)
        cin >> a[i];
    ll ans[m + 1] = {0};
    while (n--)
    {
        vector<int> x(m + 1);
        for (int j = 1; j <= m; j++)
        {
            cin >> x[j];
            ans[j] += x[j];
        }
    }
    int cnt = 0;
    for (int i = 1; i <= m; i++)
    {
        if (a[i] <= ans[i])
            cnt++;
    }
    if (cnt == m)
        cout << "Yes" << '\n';
    else
        cout << "No" << '\n';
}