#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define MTK                     \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
typedef long long int ll;
#define all(x) x.begin(), x.end()
#define mod 1000000007

int32_t main()
{
  MTK;
  int n, p;
  cin >> p >> n;
  map<int, int> mp;
  for (int i = 1; i <= p; i++)
    mp[i] = 0;
  while (n--)
  {
    int a, b;
    cin >> a >> b;
    if (mp.find(a) != mp.end())
    {
      int x = mp[a];
      b += x;
    }
    mp[a] = b;
    set<int> s;
    for (auto [x, y] : mp)
      s.insert(y);
    cout << s.size() << '\n';
  }
}