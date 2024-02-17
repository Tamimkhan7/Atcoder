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
int32_t main()
{
    MTK;
    ll n, m, k;
    cin >> n >> m >> k;
    int x = min(n, m);
    while (1)
    {
        if (x % n == 0 and x % m != 0)
            k--;
        else if (x % n != 0 and x % m == 0)
            k--;
        if (k == 0)
        {
            cout << x << '\n';
            break;
        }
        x++;
    }
}