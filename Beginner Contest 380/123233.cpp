#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll int long long

int32_t main()
{
    MTK;
    string s;
    cin >> s;
    int one = 0, two = 0, three = 0;
    for (int i = 0; i < (int)s.size(); i++)
    {
        if (s[i] == '1')
            one++;
        else if (s[i] == '2')
            two++;
        else if (s[i] == '3')
            three++;
    }
    if (one == 1 and two == 2 and three == 3)
        cout << "Yes" << '\n';
    else
        cout << "No" << '\n';
    return 0;
}