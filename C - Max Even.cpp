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
#define mod 1000000007
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
    int n;
    cin >> n;
    vector<int> odd, even;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a & 1)
            odd.push_back(a);
        else
            even.push_back(a);
    }
    sort(odd.rbegin(), odd.rend());
    sort(even.rbegin(), even.rend());
    int mx = -1;
    if (odd.size() >= 2)
        mx = max(mx, odd[0] + odd[1]);
    if (even.size() >= 2)
        mx = max(mx, even[0] + even[1]);
    cout << mx << endl;
    return 0;
}