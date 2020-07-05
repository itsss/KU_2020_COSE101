#include <stdio.h>

int arr[10001];

int main() {
    int n, N, s=0;
    scanf("%d %d", &n, &N);
    
    for(int i = 1; i <= n; i++) arr[i] = 100000;
    
    for(int i = 0; i < N; i++) {
        int a, p;
        scanf("%d %d", &a, &p);
        if(a > 0 && arr[a] > p) arr[a] = p;
    }
    
    for (int i = 1; i <= n; i++) s += arr[i];
    printf("%d", s);
}
