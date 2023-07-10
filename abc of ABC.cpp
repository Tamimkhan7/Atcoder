#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int c = 0;
    int len = s.size();
    sort(s.begin(), s.end());
    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'a' && s[i + 1] == 'b' && s[i + 2] == 'c')
            c++;
    }
    // cout << c << endl;
    if (c == 1)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}