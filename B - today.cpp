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
    string s, s1, s2;
    cin >> s >> s1;
    ll k = s.size();
    ll m = s1.size();

    for (ll i = 0; i < k; i++)
    {
        s2 += s[i];
        for (ll j = i; j <= i; j++)
        {
            s2 += s1[j];
        }
    }
    cout << s2;
}
