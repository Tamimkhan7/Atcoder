#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int m,n;
    cin>>n>>m;
    string s;
    cin>>s;
    int ans=0, x=0,y=0;
  	s+="0";
    for(int i=0; i<=n; i++)
    {
        if(s[i]=='0')
        {
            ans=max(ans,max(x+y-m,y));
            x=0,y=0;
        }
        if(s[i]=='2')y++;
        if(s[i]=='1')x++;
    }
    cout<<ans<<'\n';
}

