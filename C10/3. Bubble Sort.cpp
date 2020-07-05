#include <stdio.h>

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

        int tmp = 0, ps = 0;
        for(int i = 0; i < cnt-1; i++) { // BUBBLE SORT
            for(int j = 0; j < cnt-1; j++) {
                if(arr[j] > arr[j+1]) {
                    ps++;
                    tmp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = tmp;
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
