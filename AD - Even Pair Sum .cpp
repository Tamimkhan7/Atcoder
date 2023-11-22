#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
const ll mod = 1e9+7;

int main()
{
    faster;
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        ll res = 0;
        res += 1LL * ((a/2)*(b/2));
        res += 1LL * ((a+1)/2)*((b+1)/2);
        cout<<res<<'\n';
    }
}



