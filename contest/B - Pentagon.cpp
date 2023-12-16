#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,T;
    cin>>s>>T;
    int x,y;
    x= abs(s[0]-s[1]);
    y= abs(T[0]-T[1]);
    cout<<x<<' '<<y<<'\n';
    if(x>=3)x= 5-x;
    if(y>=3)y=5-y;
    if(x==y)cout<<"Yes"<<'\n';
    else cout<<"No"<<'\n';
}
