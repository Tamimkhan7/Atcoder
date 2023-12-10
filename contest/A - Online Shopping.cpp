#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n,s,k;
    cin>>n>>s>>k;
    int a[n],b[n];
    ll ans=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i]>>b[i];
        ans += a[i]*b[i];
    }
    if(ans>=s)cout<<ans<<'\n';
    else cout<<ans+k<<'\n';


}
