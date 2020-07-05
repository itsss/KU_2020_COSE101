#include <stdio.h>

int arr[100001];

int main() {
    int n, i, N;
    scanf("%d %d %d", &n, &i, &N);
    arr[i] = 1;
    printf("%d\n", i);
    for(int c = 1; c <= N; c++) {
        int a, b;
        scanf("%d %d", &a, &b);
        if(arr[a] == 1 || arr[b] == 1) {
            if(arr[a] == 0) {
                arr[a] = 1; printf("%d\n", a);
            }
            if(arr[b] == 0) {
                arr[b] = 1; printf("%d\n", b);
            }
        }
    }
}
