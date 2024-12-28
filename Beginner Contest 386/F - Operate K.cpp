#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define int int long long
#define mod 1000000007

int32_t main()
{
    MTK;
    int k;
    cin >> k;
    string s, t;
    cin >> s >> t;
    map<char, int> mp1, mp2;
    for (auto x : s)
        mp1[x]++;

    for (auto x : t)
        mp2[x]++;

    for (auto x : s)
    {
        if (mp1[x] >= mp2[x])
            mp1[x] -= mp2[x];
        else
            mp1[x] = 0;
    }
    int cnt1 = 0;
    for (auto [x, y] : mp1)
        cnt1 += y;

    if (cnt1 <= k)
        cout << "Yes" << '\n';
    else
        cout << "No" << '\n';
    return 0;
}