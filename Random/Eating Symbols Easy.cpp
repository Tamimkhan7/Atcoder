#include <bits/stdc++.h>
using namespace std;
int main()
{
    int c = 0, k = 0;
    string s;
    cin >> s;
    int len = s.size();
    for (int i = 0; i < len; i++)
    {
        if (s[i] == '+')
            c++;
        else
            k++;
    }
    cout << c - k << endl;
}