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
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int cnt = 0;
    for (int mask = 0; mask < (1 << n); mask++)
    {
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            if ((mask >> i) & 1)
            {
                v.push_back(a[i]);
                if (v.size() > 4)
                    break;
            }
        }
        // cout << '\n';
        if (v.size() == 3)
        {
            int x = a[1] - v[0];
            int y = a[2] - a[1];
            if (x == y)
                cnt++;
        }
    }
    cout << cnt << '\n';
}