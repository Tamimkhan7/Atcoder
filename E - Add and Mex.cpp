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
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    vector<int> v;
    while (m--)
    {
        for (int i = 0; i < n; i++)
        {
            int c = arr[i] + (i + 1);
            v.push_back(c);
        }
        // sort(v.begin(), v.end());
        int mn = 0;
        for (int i = 0; i < n; i++)
        {
            if (mn != v[i])
            {
                mn = 0;
                break;
            }
            else
            {
                if (v[i] > 0)
                {
                    int p = v[i + 1] - v[i];
                    if ((p - mn) > 1)
                        mn = v[i] + 1;
                }
            }
        }
        cout << mn << endl;
        for (int i = 0; i < n; i++)
            arr[i] = v[i];
    }
    return 0;
} // korte hobe