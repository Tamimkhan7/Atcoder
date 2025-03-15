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
    int ans = 0;
    for (int i = 0; i < (int)s.size() - 1; i++)
    {
        if (i % 2 == 0)
        {
            if (s[i] != 'i')
            {
                ans++;
                s.insert(s.begin() + i, 'i');
            }
            else if (s[i] == 'i' and s[i + 1] != 'o')
            {
                s.insert(s.begin() + i + 1, 'o');
                ans++;
            }
        }
        else
        {
            if (s[i] != 'o')
            {
                ans++;
                s.insert(s.begin() + i, 'o');
            }
            else if (s[i] == 'o' and s[i + 1] != 'i')
            {
                s.insert(s.begin() + i + 1, 'i');
                ans++;
            }
        }
        //show(s);
    }
    int n = s.size();
    if (n % 2 != 0)
        ans++;

    cout << ans << '\n';
    return 0;
}