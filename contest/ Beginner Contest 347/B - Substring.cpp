#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define all(x) x.begin(), x.end()
typedef long long int ll;
#define mod 1000000007

int32_t main()
{
    MTK;
    string s;
    cin >> s;
    set<string> se;
    vector<string> v;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            string x;
            for (int k = j; k <= i; k++)
            {
                x += s[k];
            }
            se.insert(x);
            v.push_back(x);
        }
    }
    if (s.size() == 1)
    {
        cout << s.size() << '\n';
        return 0;
    }
    cout << se.size() - 1 << '\n';

    return 0;
}