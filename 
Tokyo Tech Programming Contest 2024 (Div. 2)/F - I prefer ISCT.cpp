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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;

        string s = "TIOT", ss = "ISCT";
        int i = 0, j = 0;

        while (i < a.size() && j < b.size() && a[i] == b[j])
            i++, j++;

        while (i < a.size() && j < b.size())
        {
            bool ok = false;
            if (a[i] == 'T' && b[j] == 'I' && i + 3 < a.size() && j + 3 < b.size())
            {
                while (a.substr(i, 4) == s && b.substr(j, 4) == ss)
                {
                    i += 3;
                    j += 3;
                    ok = true;
                    continue;
                }
            }
            else if (a[i] == b[j])
            {
                i++;
                j++;
            }
            else
                break;

            if (ok)
                i++, j++;
        }

        if (i == a.size() && j == b.size())
            cout << "Yes" << '\n';
        else
            cout << "No" << '\n';
    }
    return 0;
}
