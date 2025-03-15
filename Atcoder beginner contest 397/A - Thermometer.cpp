#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007

int32_t main()
{
    MTK;
    double x;
    cin >> x;
    if (x >= 38.0)
        cout << 1 << '\n';
    else if (x < 38.00 and x >= 37.5)
        cout << 2 << '\n';
    else
        cout << 3 << '\n';
    return 0;
}