#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s,k;;
    cin>>s>>k;
    string t;
    int c=0;
    while(s--)
    {
        for(int j=0; j<k; j++)
        {
            cin>>t[j];

            if(t[j] == '#')
            {
                c++;
            }
        }
    }
    cout<<c<<endl;
}
