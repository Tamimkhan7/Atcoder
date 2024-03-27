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
    string s;
    cin >> n >> s;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int s1 = 0, s2 = 0;
        for (int j = i; j < n; j++)
        {
            if (s[j] == 'A')
                s1++;
            else if (s[j] == 'T')
                s1--;
            else if (s[j] == 'C')
                s2++;
            else
                s2--;
            if (s1 == 0 and s2 == 0)
            {
                ans++;
            }
        }
    }
    cout << ans << '\n';
}