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
    int n, m;
    cin >> n >> m;
    vector<ll> v;
    int p = 0;
    while (m--)
    {
        int k;
        cin >> k;
        for (int i = 0; i < k; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }
    }
    int c = 0, t = 0;
    sort(v.begin(), v.end());
    // int y = 0;
    // for (int i = 0; i < v.size() - 1; i++)
    // {
    //     if (v[i] != v[i + 1])
    //         y++;
    // }
    for (int i = 0; i < v.size() - 1; i++)
    {
        if (v[i] == v[i + 1])
        {
            c++;
        }
        else
        {
            if (c == 0)
                t++;
            else
                c = 0;
        }
    }
    // y += 1;

    if (t != 0)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;
    return 0;
}