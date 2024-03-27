#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int llu;
void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    if ((s[0] != '<') || (s[n - 1] != '>'))
    {
        cout << "No" << '\n';
        return;
    }
  
    for (int i = 1; i < (n - 1); i++)
    {
        if (s[i] != '=')
        {
            cout << "No" << '\n';
            return ;
        }
    }
    cout << "Yes" << '\n';
}
int main()
{
    solve();
}
