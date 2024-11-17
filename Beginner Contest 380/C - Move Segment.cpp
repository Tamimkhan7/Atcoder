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
    int n, k;
    string s;
    cin >> n >> k >> s;
    vector<pair<int, int>> val;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            int j = i;
            while (j < n && s[j] == '1')
                j++;
            val.push_back({i, j - 1});
            i = j - 1;
        }
    }
    // for (auto [x, y] : val)
    //     cout << x << ' ' << y << '\n';
    int l1 = val[k - 2].first, r1 = val[k - 2].second;
    int l2 = val[k - 1].first, r2 = val[k - 1].second;
    string result = s.substr(0, r1 + 1) + string(r2 - l2 + 1, '1') + string(l2 - r1 - 1, '0') + s.substr(r2 + 1);
    cout << result << '\n';
    return 0;
}
