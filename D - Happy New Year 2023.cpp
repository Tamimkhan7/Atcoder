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
        ll x;
        cin >> x;
        ll k = sqrt(x);
        double q = x / k;
        q = ceil(sqrt(q));
        if ((q * q) * k == x)
        {
            cout << q << " " << k << endl;
            break;
        }
        else
        {
            while (k != 0)
            {
                if ((k * k) * q == x)
                {
                    break;
                }
                else
                {
                    k -= 1;
                }
            }
            while (k != 0)
            {
                if ((k * k) * q == x)
                {
                    break;
                }
                else
                {
                    k -= 1;
                    q += 1;
                }
            }
        }
        cout << k << " " << q << endl;
    }
}