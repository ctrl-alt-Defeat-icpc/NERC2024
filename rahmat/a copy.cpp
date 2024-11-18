#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 1e3 + 5;
ll n, a[N], b[N], maxc[N];
ll maxwork[N], k;

void Main() {
    cin >> n >> k;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n; i++) {
        cin >> b[i];
        maxc[i] = a[i] / b[i];
    }
    for(int i = n - 1; i >= 0; i--)
        maxwork[i] = maxc[i] + maxwork[i + 1];

    if(maxwork[0] < k) {
        for(int i = 0; i < n; i++)
            cout << 0 << ' ';
        cout << '\n';
        return;
    }
    for(int i = 0; i < n; i++) {
        cout << k - maxwork[i + 1] << ' ';
        k = min(k, maxwork[i + 1]);
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    // int t; cin >> t; while(t--) Main();
    Main();
    return 0;
}