#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007

int32_t main()
{
    MTK;
    int n, q;
    cin >> n >> q;
    int a[q + 1];
    for (int i = 1; i <= q; i++)
        cin >> a[i];
    sort(a + 1, a + q + 1);
    int cnt = 0;
    for (int i = 1; i <= q; i++)
    {
        if (a[i] == a[i + 1])
        {
            // cout << a[i] << ' ' << a[i + 1] << '\n';
            cnt++;
            i++;
        }
    }
    cout << n - (q-(cnt * 2)) << '\n';
}