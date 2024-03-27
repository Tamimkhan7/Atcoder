#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,res;
    cin>>t;
    int k[t];
    for(int i=0; i<t; i++)
    {
        cin>>k[i];
        if(i==0)
        {
            res=k[i];
            cout<<res<<" ";
        }
        else
        {
            res = k[i]-k[i-1];
            cout<<res<<" ";
        }
    }
    cout<<endl;
}
