#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (1)
    {
        if (n % n == 0 && n % 2 == 0)
        {
            cout << n << endl;
            break;
        }
        n *= 2;
    }
}