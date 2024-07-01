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
    string s;
    cin >> s;
    if ((s[0] == 'R' and (s[1] || s[2] == 'M')) || (s[1] == 'R' and s[2] == 'M'))
        cout << "Yes" << '\n';
    else
        cout << "No" << '\n';
    return 0;
}