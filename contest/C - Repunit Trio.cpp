#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin>>n;
    ll x=3;
    n--;
    while(n--)
    {
        x+=10;
        cout<<x<<'\n';
        int y = x;
        string s = to_string(y);
           int ans=0;
        reverse(s.begin(), s.end());
        if(s[0]=='3')ans++;
        if(s[1]=='3')ans++;
       // cout<<ans<<'\n';
        if(ans==2)y +=103;
        //else continue;
    }
    cout<<x<<'\n';
}

