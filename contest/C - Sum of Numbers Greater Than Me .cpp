#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n;
    cin>>n;
    int a[n],c[n], xp[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        c[i]=a[i];
    }
    sort(a, a+n);
    int b[n+1];
    b[n]=0;
    for(int i=n-1; i>=0; i--)
    {
        b[i] = a[i]+b[i+1];
    }

    for(int i=0; i<n; i++)
    {
        int x =a[i];
        if(x<a[i])
        {

        }

    }
    cout<<'\n';
}
