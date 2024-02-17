#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
#define all(x) x.begin(), x.end()
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    int x = n * 2;
    int a[x];
    for (int i = 0; i < x; i++)
        cin >> a[i];
    sort(a, a + x);
    ll sum = 0;
    for (int i = 0; i < x - 1; i += 2)
    {
        int x = a[i];
        int y = a[i + 1];
        sum += min(x, y);
    }
    cout << sum << '\n';
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
}