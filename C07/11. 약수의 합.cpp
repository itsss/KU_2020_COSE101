#include <stdio.h>

int main()
{
    int n, arr[100001];
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = 1; j <= arr[i]; j++) {
            if(arr[i] % j == 0) {
                sum+=j;
            }
        }
        printf("%d\n", sum);
    }
}
