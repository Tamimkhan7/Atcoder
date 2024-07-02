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
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    for (int i = 0; i < n; i++)
    {
        int x = a[i];
        int y = b[i];
        v.push_back(make_pair(x, y));
    }
    sort(all(v));
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i].first == v[i + 1].first)
            ans += v[i].second;
    }
    cout << ans << '\n';
    return 0;
}