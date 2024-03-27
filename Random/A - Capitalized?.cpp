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
    int n = s.size();
    for (int i = 1; i < n; i++)
    {
        if (s[i] >= 'A' and s[i] <= 'Z')
        {
            cout << "No" << '\n';
            return 0;
        }
    }
    if (s[0] >= 'A' and s[0] <= 'Z')
        cout << "Yes" << '\n';
    else
        cout << "No" << '\n';
}