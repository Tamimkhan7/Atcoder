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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        ll sum = 0;
        if (n < 10)
            n = n;
        else
            n /= 2;
        for (int i = 1; i <= n; i++)
        {
            sum += i;
            // v.pb(i);
            if (sum == n)
                break;
            else
                continue;
        }
        if (sum == n)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}