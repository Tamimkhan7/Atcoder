#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int M,D;
    cin>>M>>D;
    int y,m,d;
    cin>>y>>m>>d;
    d++;
    if(d>D)
    {
        m++;
        d=1;
    }
    if(m>M)
    {
        y++;
        m=1;
    }
    cout<<y<<' '<<m<<' '<<d<<'\n';
}
