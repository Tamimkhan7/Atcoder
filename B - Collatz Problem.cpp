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
    vector<int> v;
    int n;
    cin >> n;
    v.push_back(n);
    while (1)
    {
        if (n % 2 == 0)
        {
            n /= 2;
            auto it = find(all(v), n);
            if (it != v.end())
            {
                cout << v.size() + 1 << '\n';
                return;
            }
            v.push_back(n);
        }
        else
        {
            n = 3 * n + 1;
            auto it = find(all(v), n);
            if (it != v.end())
            {
                cout << v.size() + 1 << '\n';
                return;
            }
            v.push_back(n);
        }
    }
}
int32_t main()
{
    MTK;
    solve();
    return 0;
}
