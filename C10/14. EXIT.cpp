#include <stdio.h>

int arr[10][10] = {0}, ans[10][10] = {0};

int a_, m, n;

int abs(int a) {
    if(a<0) return -a;
    else return a;
}

void solve(int a, int b, int c) {
    if(ans[a][b] != 0 && ans[a][b] <= c) return;
    ans[a][b] = c;

    if (a > 0 && abs(arr[a][b]-arr[a-1][b]) <= a_) solve(a-1, b, c+1);
    if (a < m - 1 && abs(arr[a][b]-arr[a+1][b]) <= a_) solve(a+1, b, c+1);
    if (b > 0 && abs(arr[a][b] - arr[a][b-1]) <= a_) solve(a, b-1, c+1);
    if (b < n - 1 && abs(arr[a][b] - arr[a][b+1]) <= a_) solve(a, b+1, c+1);
}

int main() {
    scanf("%d %d %d", &a_, &n, &m);

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    solve(0, 0, 0);

    if (ans[m-1][n-1] != 0 && ans[m-1][n-1] <= arr[m-1][n-1]) printf("%d", ans[m-1][n-1]);
    else printf("IMPOSSIBLE");
}
