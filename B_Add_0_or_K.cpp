#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

void solve() {
    int n;
    long long k;
    std::cin >> n >> k;
    std::vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    int min_ops = k;
    for (long long val : a) {
        if (val % k == 0) {
            min_ops = 0;
            break;
        }
        min_ops = std::min(min_ops, (int)(k - (val % k)));
    }

    if (k == 4) {
        int ops_to_even = 0;
        int ops_to_4_from_even = 0;
        for (long long val : a) {
            if (val % 2 != 0) {
                ops_to_even++;
            } else if (val % 4 != 0) {
                ops_to_4_from_even++;
            }
        }
        min_ops = std::min(min_ops, ops_to_even);
        min_ops = std::min(min_ops, ops_to_4_from_even);
    }
    
    std::cout << min_ops << std::endl;
}

// Main function to run test cases
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}