#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
#define all(x) x.begin(), x.end()
#define mod 1000000007

int main()
{
    MTK;
    string s, ss;
    cin >> s;
    ss = s;
    // int flag = 0, timecount = 0;

    // if (s.size() == 1)
    // {
    //     char xp = s[0];
    //     if (xp == 'A')
    //         s.erase(s.begin());
    // }
    // while (!s.empty())
    // {
    //     if (timecount > 1000)
    //         break;
    //     timecount++;
    //     char x = s[0];
    //     char y = s[1];
    //     if ((x == 'A' && y == 'A') || (x == 'A' && y == 'B'))
    //     {
    //         s.erase(s.begin());
    //         s.erase(s.begin());
    //         flag = 1;
    //     }
    //     else if ((x == 'B' && y == 'B') || (x == 'B' && y == 'C'))
    //     {
    //         s.erase(s.begin());
    //         s.erase(s.begin());
    //     }
    //     else if ((x == 'C' && y == 'C'))
    //     {
    //         s.erase(s.begin());
    //         s.erase(s.begin());
    //     }
    //     if (s.size() == 1 and flag == 1)
    //     {
    //         char xp = s[0];
    //         if (xp == 'C')
    //             s.erase(s.begin());
    //     }
    // }
    sort(all(s));
    if (ss == s)
        cout << "Yes" << '\n';
    else
        cout << "No" << '\n';

    return 0;
}
