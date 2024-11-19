#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 1e5 + 5;
int n, c01, c10, zero;

void Main() {
    scanf("%d", &n); // input n
    printf("1 01\n");
    fflush(stdout);
    scanf("%d", &c01);
    printf("1 10\n");
    fflush(stdout);
    scanf("%d", &c10);
    if(c01 > c10) {
        printf("0 1 0\n");
        fflush(stdout);
    }
    else if(c01 < c10) {
        printf("0 1 1\n");
        fflush(stdout);
    }
    else {
        printf("1 0\n");
        fflush(stdout);
        scanf("%d", &zero);
        if(n - zero > zero) {
            printf("0 1 1\n");
            fflush(stdout);
        }
        else {
            printf("0 1 0\n");
            fflush(stdout);
        }
    }
}

int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--) Main();
    // Main();
    return 0;
}