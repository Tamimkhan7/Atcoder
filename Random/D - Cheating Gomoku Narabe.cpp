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
    int h, w, k;
    cin >> h >> w >> k;
    char a[h][w];
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cin >> a[i][j];
        }
    }
    int ans = 0;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if ((1 <= i and i <= h) and (1 <= j and j <= (w - k + 1)))
            {
                if (a[i][j] != 'x' and a[i][j] != 'o')
                {
                    cout << i << ' ' << j << ' ';
                    cout << a[i][j] << '\n';
                    // a[i][j] = 'o';
                    ans++;
                }
            }
            else if ((1 <= i and i <= (h - k + 1)) and (1 <= j and j <= w))
            {
                if (a[i][j] != 'x' and a[i][j] != 'o')
                {
                    cout << i << ' ' << j << ' ';
                    cout << a[i][j] << '\n';
                    // a[i][j] = 'o';
                    ans++;
                }
            }
        }
    }
    cout << ans << '\n';
}