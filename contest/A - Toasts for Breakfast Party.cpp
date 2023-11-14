#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
typedef unsigned long long int llu;

int main()
{
    faster;
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.rbegin(), a.rend()); // boro theke choto akare sort korteci
    vector<ll> p(m);

    for (int i = 0; i < m; i++) // sob gula toast m plates a rakhteci
        p[i] += a[i];

    for (int i = 0; i < n - m; i++) // sob ceye boro value ta choto value tay rakhteci
        p[m - 1 - i] += a[m + i];

    ll ans = 0;
    for (int i = 0; i < m; i++) // then proti ta plate a two ta kore toast rakhteci
        ans += p[i] * p[i];

    cout << ans << endl;
}