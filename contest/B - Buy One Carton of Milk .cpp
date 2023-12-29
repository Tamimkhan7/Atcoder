#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n,s,m,l;
    cin>>n>>s>>m>>l;
    int ans=1e9;
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=n; j++)
        {
            for(int k=0; k<=n; k++)
            {
                if(i*6+j*8+k*12<n)continue;
                ans = min(ans,(i*s+j*m+k*l));
            }
        }
    }
    cout<<ans<<'\n';
}

