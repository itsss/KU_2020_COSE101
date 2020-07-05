#include <stdio.h>
#include <string.h>

int v[101][10001], ans[10001];

int main() {
    memset(v, -1, sizeof(v));

    int n, m;
    scanf("%d %d", &n, &m);

    for(int i = 0; i < m; i++) {
        int a, b, h;
        scanf("%d %d %d", &a, &b, &h);
        v[a][h] = b, v[b][h] = a;
    }

    for(int i = 0; i < n; i++) {
        int tmp = i;
        for(int j = 10001; j > 0; j--) {
            if(v[tmp][j] != -1) {
                tmp = v[tmp][j];
            }
        }
        ans[tmp] = i;
    }

    for(int i = 0; i < n; i++) {
        printf("%d\n", ans[i]);
    }
}
