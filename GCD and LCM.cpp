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
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, c, d;
        cin >> a >> b;
        c = a;
        d = b;
        if (d % c == 0)
        {
            cout << c << " ";
        }
        else
        {
            while (d != 0)
            {
                ll k = d;
                d = c % d;
                c = k;
            }
            cout << c << " ";
        }
        ll lcm = (a * b) / c;
        cout << lcm << endl;
    }
}
