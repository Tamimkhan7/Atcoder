#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
#define all(x) x.begin(), x.end()
#define mod 1000000007

int32_t main()
{
    MTK;
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            int a, b;
            cin >> a >> b;

            auto it = find(all(v), a);
            int dis = (it - v.begin());

            // amar vector a kono jodi space thake tahole amake unnessary kicu space dekhate pare, se khette amar right output
            // asbe na tar jonno amake check kore dekhte hobe amar capacity thik ace kina, jodi kono space pawa jay thaole space
            // element gula 0 diye fill-up kore dite hobe
            if (v.size() < v.capacity())
                v.push_back(0);
            for (int j = v.size() - 1; j > dis; j--)
            {
                v[j] = v[j - 1];
            }
            v[dis + 1] = b;
        }
        else
        {
            int a, flag;
            cin >> a;
            auto it = find(all(v), a);
            int dis = (it - v.begin());
            v.erase(v.begin() + dis);
        }
    }
    for (auto x : v)
        cout << x << ' ';
    cout << '\n';
}
// ai contest ar all provlem solve korte hobe beginning contest 2024#3