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
    string s, t;
    cin >> s >> t;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != t[i])
        {
            for (int j = i + 1; j < n; j++)
            {
                if (s[j] != t[j])
                {
                    ans++;
                    s[i] = 'A';
                    s[j] = 'B';
                    if (s == t)
                    {
                        cout << ans << '\n';
                        return 0;
                    }
                    break;
                }
            }
        }
    }
    cout << -1 << '\n';
}