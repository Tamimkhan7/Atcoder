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
    string s;
    cin >> s;
    int ans = 1e9;
    for (int i = 0; i < (int)s.size() - 2; i++)
    {
        string sub = s.substr(i, 3);
        int x = stoi(sub);
        int colse_of_753 = abs(x - 753);
        ans = min(colse_of_753, ans);
    }
    cout << ans << '\n';
    return 0;
}