#include <stdio.h>

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    int N;
    scanf("%d", &N);

    for(int a = 0; a < N; a++) {
        int cnt;
        scanf("%d", &cnt);

        int arr[cnt];
        for(int b = 0; b < cnt; b++) {
            scanf("%d", &arr[b]);
        }
        int ps = 0, temp = 0;
        for(int i = 1; i < cnt; i++) { // Insertion Sort
            temp = arr[i];
            for(int j = i-1; j >= 0; j--) {
                if(arr[j] > temp) {
                    ps++;
                    swap(&arr[j], &arr[j+1]);
                }
            }
        }
        printf("%d ", ps);
        for(int b = 0; b < cnt; b++) {
            printf("%d", arr[b]);
            if(b < cnt-1) printf(" "); // to avoid Presentation Error.
        }
        printf("\n");
    }
}
