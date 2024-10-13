#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007

int32_t main()
{
    MTK;
    int n;
    cin >> n;
    double ans = 0;
    int pre_a = 0, pre_b = 0;
    for (int i = 0; i < n; i++)
    {
        int new_a, new_b;
        cin >> new_a >> new_b;
        double x = pow((pre_a - new_a), 2);
        double y = pow((pre_b - new_b), 2);

        ans += sqrt(x + y);
        pre_a = new_a, pre_b = new_b;
    }

    double x = pow((pre_a - 0), 2);
    double y = pow((pre_b - 0), 2);

    ans += sqrt(x + y);
    cout << fixed << setprecision(20) << ans << '\n';
    return 0;
}