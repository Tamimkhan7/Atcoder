#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int k,g,m;
    cin>>k>>g>>m;
    int ng=0, nm=0;
    while(k--)
    {
        if(ng==g)
        {
            ng=0;
            continue;
        }
        if(nm==0)
        {
            nm=m;
            continue;
        }
        int t= min(nm, g-ng);
        //cout<<t<<' ';
        ng += t;
        nm -=t;

    }
    cout<<ng<<' '<<nm<<'\n';
}
