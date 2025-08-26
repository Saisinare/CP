#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, a, b;
    cin >> n >> a >> b;

    if ((n - b) % 2 != 0) {
        std::cout << "NO" << std::endl;
        return;
    }

    if ((n - a) % 2 == 0 || a <= b) {
        cout << "YES" << std::endl;
    } else {
        cout << "NO" << std::endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}