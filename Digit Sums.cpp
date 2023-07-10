#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, p;
    cin >> s;
    int len = s.size();
    int sum = 0, k;
    for (int i = 0; i < len; i++)
    {
        p = (s[i]);
        sum += stoi(p);
    }
    // cout << sum << endl;
    k = stoi(s);
    if (k % sum == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}