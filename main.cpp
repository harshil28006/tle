#include <bits/stdc++.h>
using namespace std;

// Define all int as long long
#define int long long

// Fast I/O
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    int n;
    cin >> n;                 // size of array

    int arr[n];               // array (actually long long due to #define)
    for (int i = 0; i < n; i++) {
        cin >> arr[i];        // input array
    }

    int sum = 0;              // sum is also long long
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    cout << sum << "\n";      // output
}

int32_t main() {              // use int32_t so main returns normal int
    fastio;
    int t = 1;                // number of test cases
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
