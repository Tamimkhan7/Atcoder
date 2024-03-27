#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    long long int len2,i, c=1, len1,k;
    len1 = a.size();
    len2= b.size();
    k = max(len1, len2);
    for( i=0; i<k; i++)
    {
        if(a[i] == b[i])
        {
            c++;
        }
        else if(a[i] != b[i])
        {
            break;

        }
    }
    cout<<c<<endl;
}
