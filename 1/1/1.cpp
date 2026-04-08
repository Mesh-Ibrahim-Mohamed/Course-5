
#include <iostream>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    long long s = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s += x;
    }

    if (s % 2 != 0 || k % 2 != 0) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}