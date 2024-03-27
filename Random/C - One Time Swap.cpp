#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int llu;
int main()
{
    faster;
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    deque<char> d;
    for (auto x : s)
        d.push_back(x);
    ll ans = 0;
    while (d.size() > 1)
    {
        char v = d.front();
        int sz = d.size(), cnt = 0;
        while (v == d.front())
        {
            cnt++;
            d.pop_front();
        }
        ans += (sz - cnt) * cnt;
    }
    if (ans == 0)
        cout << 1 << '\n';
    else
        cout << ans << '\n';
}
