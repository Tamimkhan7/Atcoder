#include<bits/stdc++.h>
using namespace std;
#define MTK ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mem(a, b) memset(a, b ,sizeof(a))
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007

int32_t main() {
    MTK;
 int n=9;
 int sum =0,sum2=0;
 while(n--){
    int x;cin>>x;
    sum += x;
 }   
 int m=8;
 while(m--){
    int x;cin>>x;
    sum2+= x;
 }
 cout<<(sum-sum2)+1<<'\n';
    return 0;
}