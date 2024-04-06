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

int main()
{
    MTK;
    int n;
    cin >> n;

    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }

    for (int i = 0; i < n; i++)
    {
        int mx = -1e9, res = 0;
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;
            auto [x1, y1] = v[i];
            auto [x2, y2] = v[j];
            ll ans = (1LL * (x1 - x2) * (x1 - x2) + 1LL * (y1 - y2) * (y1 - y2));

            if (mx < ans)
            {
                res = j + 1;
                mx = ans;
            }
            else if (mx == ans)
                res = min(res, j + 1);
        }
        cout << res << '\n';
    }
    return 0;
}
