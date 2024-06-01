#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
#define mod 1000000007

int main()
{
    MTK;
    int N, M, K;
    cin >> N >> M >> K;

    vector<vector<int>> tests(M);
    vector<char> results(M);

    for (int i = 0; i < M; i++)
    {
        int C;
        cin >> C;
        tests[i].resize(C);
        for (int j = 0; j < C; j++)
        {
            cin >> tests[i][j];
            tests[i][j]--;
        }
        cin >> results[i];
    }

    int valid_count = 0;

    for (int mask = 0; mask < (1 << N); mask++)
    {
        bool valid = true;
        for (int i = 0; i < M; i++)
        { 
            int real_key_count = 0;
            for (int key : tests[i])
            {
                if (mask & (1 << key))
                    real_key_count++;
            }

            if ((results[i] == 'o' && real_key_count < K) || (results[i] == 'x' && real_key_count >= K))
            {
                valid = false;
                break;
            }
        }

        if (valid)
            valid_count++;
    }

    cout << valid_count << '\n';
    return 0;
}
