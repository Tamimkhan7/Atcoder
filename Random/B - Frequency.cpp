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
    string s;
    cin >> s;
    int a[128] = {};
    for (auto c : s)
    {
        a[c]++;
    }
    char ans = 'a';
    for (char c = 'b'; c <= 'z'; c++)
    {
        if (a[c] > a[ans])
            ans = c;
    }
    cout << ans << '\n';
}
/* int n = s.size();
    int mx = -1;
    char ss = 'z';
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = i; j < n; j++)
        {
            if (s[i] == s[j])
            {
                cnt++;
            }
        }
        if (mx <= cnt)
        {
            if (s[i] <= ss)
            {
                ss = s[i];
            }
            mx = cnt;
        }
    }
    cout << ss << '\n';*/