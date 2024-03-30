#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, A, B;
    cin >> N >> A >> B;

    vector<int> D(N);
    for (int i = 0; i < N; ++i)
        cin >> D[i];

    int current_day = D[0] % (A + B);
    bool all_on_holidays = true;
    for (int i = 0; i < N; ++i)
    {
        if (current_day >= 1 && current_day <= A)
        {
            if (D[i] % (A + B) > A)
            {
                all_on_holidays = false;
                break;
            }
        }
        else
        {
            all_on_holidays = false;
            break;
        }
    }

    if (all_on_holidays)
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}
