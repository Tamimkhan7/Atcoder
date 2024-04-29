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
    int n;
    int n;
    cin >> n;
    deque<int> d, ans;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        d.push_back(x);
    }
    while (!d.empty())
    {
        int x = d.front();
        d.pop_front();
        int y = d.front();
        if (x < 1)
            break;
        if (x == y)
            x += y;
    }

    return 0;
}