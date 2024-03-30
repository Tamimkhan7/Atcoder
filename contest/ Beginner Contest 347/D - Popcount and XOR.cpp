#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define all(x) x.begin(), x.end()
typedef unsigned long long int llu;
#define mod 1000000007
llu a, b, c;
const int N = 1e7;
bool ok(llu n)
{
    bitset<64> binary(n);
    llu cnt = binary.count();

    if (cnt == a)
        return true;
    else
        return false;
}

bool ok2(llu n)
{
    bitset<64> binary(n);
    llu cnt = binary.count();
    // cout << cnt << '\n';
    if (cnt == b)
        return true;
    else
        return false;
}
int32_t main()
{
    MTK;
    cin >> a >> b >> c;
    llu y = 1, ans2, x = 1, ans;
    while (x <= N)
    {
        if (ok(x))
        {
            ans = x;
            while (y <= N)
            {
                if (ok2(y))
                {
                    ans2 = y;
                    if ((ans ^ ans2) == c)
                    {
                        cout << ans << ' ' << ans2 << '\n';
                        return 0;
                    }
                    x++, y++;
                    break;
                }
                y++;
            }
        }
        x++;
    }
    cout << -1 << '\n';

    return 0;
}