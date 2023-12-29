#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define sq(x) (x) * (x)
#define PI acos(-1.0)
#define all(x) x.begin(), x.end()
const long long mod = 998244353;
typedef long long int ll;
typedef unsigned long long int llu;
#define pb push_back
#define pop pop_back()
#define len(a) sizeof(a)
#define lc (n * 2)
#define rc ((n * 2) + 1)
int main()
{
    faster;
    llu a, b;
    cin >> a >> b;
    llu ans = (pow(a, b)) % mod;
    cout << ans << endl;
    ans = pow(ans, 2);
    ll count = 0;
    while (ans > 1)
    {
        count++;
        ans /= a;
    }
    cout << count << endl;
    return 0;
}