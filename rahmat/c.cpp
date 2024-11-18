#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 2e5 + 5;
int n, a[N], b[N];
int doubleSize;

void Main() {
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    doubleSize = 0;
    for(int i = 1; i < n; i++)
        if(a[i - 1] == a[i]) {
            b[doubleSize++] = a[i];
            i++;
        }
    if(doubleSize < 4)
        cout << "NO\n";
    else {
        int x1 = b[0];
        int x2 = b[doubleSize - 2];
        int y1 = b[1];
        int y2 = b[doubleSize - 1];
        cout << "YES\n";
        cout << x1 << ' ' << y1 << ' ';
        cout << x2 << ' ' << y1 << ' ';
        cout << x1 << ' ' << y2 << ' ';
        cout << x2 << ' ' << y2 << '\n';
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--) Main();
    // Main();
    return 0;
}