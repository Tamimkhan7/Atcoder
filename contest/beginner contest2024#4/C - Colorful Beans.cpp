#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    map<int, vector<int>> mp;

    for (int i = 0; i < N; ++i)
    {
        int x, y;
        cin >> x >> y;
        mp[y].push_back(x);
    }

    int max_min = 0;
    for (auto [x, y] : mp)
    {
        vector<int> v = y;
        int mn = *min_element(v.begin(), v.end());
        max_min = max(max_min, mn);
    }

    cout << max_min << endl;
    return 0;
}
