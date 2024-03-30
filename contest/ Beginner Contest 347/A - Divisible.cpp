#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define all(x) x.begin(), x.end()
typedef long long int ll;
#define mod 1000000007


int32_t main()
{
    MTK;
   int n,k;cin>>n>>k;
   vector<int>v;
  while(n--){
    int x;cin>>x;
    if(x%k==0)v.push_back(x/k);
  }
  for(auto x: v)cout<<x<<' ';
  cout<<'\n';
   

    return 0;
}