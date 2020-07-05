#include <stdio.h>
int arr[10001], ans = 987654321, s=0;

int main() {
    int m, N;
    scanf("%d %d", &m, &N);
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < N-m+1; i++) {
        s = 0;
        for(int j = i; j < i+m; j++) {
            s += arr[j];
        }
        if(ans > s) ans = s;
    }
    printf("%d", ans);
}
