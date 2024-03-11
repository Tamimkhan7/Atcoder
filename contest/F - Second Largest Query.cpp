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
int n, q;
vector<int> v;
void solve()
{
      
    while (q--)
    {
        int type, a, b;
        cin >> type >> a >> b;
        if (type == 1)
            v[a - 1] = b;
        else
        {
            vector<int> ans;
            a--;
            for (int i = a; i < b; i++)
            {
                int value = v[i];
                ans.push_back(value);
            }
            sort(all(ans), greater<int>());
            int mn = ans[0], px = -1;
            for (int i = 0; i < ans.size(); i++)
            {
                if (ans[i] != mn)
                {
                    px = ans[i];
                    break;
                }
            }

            int occurrences_cnt = count(all(ans), px);
            if (px == -1)
                cout << 0 << '\n';
            else
                cout << occurrences_cnt << '\n';
        }
    }
}
int32_t main()
{
    MTK;
    cin >> n >> q;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    solve();
}
// total_time(n*q*nlogn*nlongn*nlongn)