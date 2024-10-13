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
string s;
int L[26], R[26];
int32_t main()
{
    MTK;
    cin >> s;
    for (auto c : s)
        R[c - 'A']++;
    ll ans = 0;
    // generally answer is below the code,,but that is show TLE
    //  int n = s.size();
    //  for (int i = 0; i < n; i++)
    //  {
    //      for (int j = i + 1; j < n; j++)
    //      {
    //          if (s[i] == s[j])
    //              ans += (j - i - 1);
    //      }
    //  }
    for (auto c : s)
    {
        R[c - 'A']--;
        for (int i = 0; i < 26; i++)
        {
            ans += 1LL * L[i] * R[i];
            // cout << ans << ' ' << L[i] << ' ' << R[i] << '\n';
        }
        L[c - 'A']++;
    }
    cout << ans << '\n';
    return 0;
}