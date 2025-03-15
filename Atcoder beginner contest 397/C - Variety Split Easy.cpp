#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll long long
#define mod 1000000007

int32_t main()
{
    MTK;
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    unordered_set<int> a;
    vector<int> l(n, 0), r(n, 0);

    for (int i = 0; i < n; i++)
    {
        a.insert(v[i]);
        l[i] = a.size();
    }
    a.clear();
    for (int i = n - 1; i >= 0; i--)
    {
        a.insert(v[i]);
        r[i] = a.size();
    }

    // for (int i = 0; i < n; i++)
    //     cout << l[i] << ' ' << r[i] << '\n';

    int ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        ans = max(ans, l[i] + r[i + 1]);
    }
    cout << ans << '\n';
    return 0;
}
