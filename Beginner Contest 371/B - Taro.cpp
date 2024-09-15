#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll int long long
#define all(x) (x).begin(), (x).end()

int32_t main()
{
    MTK;
    int n, m;
    cin >> n >> m;

    vector<pair<int, char>> v;
    for (int i = 1; i <= m; i++)
    {
        int x;
        char c;
        cin >> x >> c;

        if (find(v.begin(), v.end(), make_pair(x, c)) == v.end() and c == 'M')
            cout << "Yes" << '\n';
        else
            cout << "No" << '\n';

        v.push_back(make_pair(x, c));
    }

    return 0;
}
