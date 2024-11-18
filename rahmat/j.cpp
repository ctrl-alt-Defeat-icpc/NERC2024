#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 1e5 + 5;
int n, p, num;
int seatremind;
char status;

void Main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> status >> num;
        if(status == 'B') {
            seatremind = max(0, num - p);
            p = max(0, p - num);
            if(seatremind > 0) cout << "YES\n";
            else cout << "NO\n";
        }
        else { // status == 'P'
            p += num;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    // int t; cin >> t; while(t--) Main();
    Main();
    return 0;
}