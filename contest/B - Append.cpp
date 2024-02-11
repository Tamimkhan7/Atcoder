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
    deque<int> v;
    int q;
    cin >> q;
    while (q--)
    {
        int a, x;
        cin >> a >> x;
        if (a == 1)
            v.push_front(x);
        else if (a == 2)
        {
            x--;
            cout << v[x] << '\n';
        }
    }
    // for (auto x : v)
    //     cout << x << ' ';
}