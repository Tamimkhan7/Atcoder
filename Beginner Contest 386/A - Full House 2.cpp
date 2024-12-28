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
    vector<int> v, ans;
    int x;
    while (cin >> x)
        v.push_back(x);
    sort(all(v));
    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < 4; i++)
    {
        int cnt = 1;
        int x = v[i];
        int j = i + 1;
        while (j < 4 and x == v[j])
        {
            i++, j++;
            cnt++;
        }
        ans.push_back(cnt);
    }
    if (ans.size() != 2)
        cout << "No" << '\n';
    else
    {
        sort(all(ans));
        if ((ans[0] == 1 and ans[1] == 3) || (ans[0] == 2 and ans[1] == 2))
            cout << "Yes" << '\n';
        else
            cout << "No" << '\n';
    }

    return 0;
}