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

int32_t main()
{
    MTK;
    string s, year = "", month = "", day = "";
    cin >> s;
    year = s.substr(0, 4);
    month = s.substr(5, 2);
    day = s.substr(8, 2);
    int a = stoi(year);
    int b = stoi(month);
    int c = stoi(day);
    if (a > 2019 || b > 04 || c > 30)
        cout << "TBD" << '\n';
    else
        cout << "Heisei" << '\n';

    return 0;
}
