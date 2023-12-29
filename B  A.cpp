#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if (b > a)
    {
        swap(a, b);
    }
    if (a % b == 0)
        cout << a + b << endl;
    else
        cout << abs(a - b) << endl;
}