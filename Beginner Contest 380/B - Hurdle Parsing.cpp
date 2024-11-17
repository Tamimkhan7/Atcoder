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
    vector<int> v;
    int n = s.size();
    s.erase(s.begin());
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '-')
            cnt++;
        else
        {
            if (cnt > 0)
                cout << cnt << ' ';
            cnt = 0;
        }
    }
    if (cnt > 0)
        cout << cnt;
    cout << '\n';

    // for (auto x : v)
    //     cout << x << ' ';
    // cout << '\n';
    return 0;
}