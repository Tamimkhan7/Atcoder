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
    string ss = s;
    // sort(all(ss));
    map<char, int> mp;
    for (auto x : s)
        mp[x]++;
    char ch;
    for (auto [x, y] : mp)
    {
        if (y == 1)
            ch = x;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (ch == s[i])
        {
            cout << i + 1 << '\n';
            return 0;
        }
    }
}