#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 1e5 + 5;
string str;
int a, b;
char c;

char f(int a, int b) {
    if(a == b) return '=';
    if(a > b) return '>';
    return '<';
}

void Main() {
    cin >> str;
    a = int(str[0] - '0');
    b = int(str[2] - '0');
    c = f(a, b);

    cout << a << c << b << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--) Main();
    // Main();
    return 0;
}