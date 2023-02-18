#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int arr[n],i,k;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        k *= arr[i];
    }
    long long int q = 10e18;
    if(q<=k)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<k<<endl;
    }
}
