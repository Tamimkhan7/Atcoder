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
    ll n, q;
    string s;
    cin >> n >> q >> s;
    while (q--)
    {
        ll x, l, r;
        cin >> x >> l >> r;
        if (x == 1)
        {
            l--, r--;
            for (int i = l; i <= r; i++)
            {
                if (s[i] == '0')
                    s[i] = '1';
                else
                    s[i] = '0';
            }
        }
        else
        {
            l--, r--;
            int flag = 0;
            for (int i = l; i < r; i++)
            {
                if (s[i] == s[i + 1])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
                cout << "Yes" << '\n';
            else
                cout << "No" << '\n';
        }
    }
}