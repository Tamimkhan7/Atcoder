#include <bits/stdc++.h>
using namespace std;
#define MTK ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

__int128 read() {
    string s;
    cin >> s;
    __int128 res = 0;
    for (char c : s)
        res = res * 10 + (c - '0');
    return res;
}

string write(__int128 x) {
    if (x == 0) return "0";
    string s;
    while (x > 0) {
        s += '0' + x % 10;
        x /= 10;
    }
    reverse(s.begin(), s.end());
    return s;
}

int main() {
    MTK;
    int n, k;
    cin >> n >> k;
    __int128 ans = 1;
    for (int i = 1; i <= n; i++) {
        __int128 x = read();
        ans *= x;
        string s = write(ans);
        if (s.size() > k) ans = 1;
    }
    cout << write(ans) << '\n';
    return 0;
}
