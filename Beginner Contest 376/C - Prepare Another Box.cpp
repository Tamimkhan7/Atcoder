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
    int n;
    cin >> n;
    vector<int> a(n), b(n - 1);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n - 1; i++)
        cin >> b[i];
    sort(all(a), greater<int>());
    sort(all(b), greater<int>());

    // bool found = true;
    // for (int i = 0; i < n - 1; i++)
    // {
    //     int loc = -1;
    //     int l = 0, r = a.size() - 1;
    //     while (l <= r)
    //     {
    //         int mid = (l + r) / 2;
    //         if (a[mid] == b[i])
    //         {
    //             loc = mid;
    //             break;
    //         }
    //         else if (a[mid] < b[i])
    //             l = mid + 1;
    //         else
    //             r = mid - 1;
    //     }
    //     if (loc == -1)
    //         loc = l - 1;

    //     if (loc < 0)
    //     {
    //         found = false;
    //         break;
    //     }
    //     a.erase(a.begin() + loc);
    // }

    // if (!found || a.empty())
    //     cout << -1 << '\n';
    // else
    //     cout << a[0] << '\n';
    int i = 0;
    while (i < n - 1 and b[i] >= a[i])
        i++;
    // cout << a[i] << ' ' << b[i] << '\n';
    for (int j = i; j < n - 1; j++)
    {
        if (b[j] < a[j + 1])
        {
            cout << -1 << '\n';
            return 0;
        }
    }
    // cout << a[i] << '\n';

    return 0;
}
