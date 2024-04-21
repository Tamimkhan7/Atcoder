#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main()
{
    MTK;
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i)
        cin >> A[i];

    vector<pair<int, int>> operations;
    int K = 0;

    for (int i = 0; i < N; ++i)
    {
        if (A[i] != i + 1)
        {
            int j = i + 1;
            while (A[j - 1] != i + 1)
            {
                ++j;
            }
            swap(A[i], A[j - 1]);
            operations.push_back({i + 1, j});
            ++K;
        }
    }

    cout << K << endl;
    for (auto op : operations)
    {
        cout << op.first << " " << op.second << endl;
    }

    return 0;
}
