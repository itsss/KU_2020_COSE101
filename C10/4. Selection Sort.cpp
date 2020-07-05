#include <stdio.h>

int ps;

void selection(int arr[], int n){
    int least;
    for(int i = 0; i < n-1; i++) {
        least = i;
        for(int j = i+1; j < n; j++) {
            if(arr[j] < arr[least]) least = j;
        }
        if(i != least) {
            int tmp = 0;
            ps++;
            tmp = arr[i];
            arr[i] = arr[least];
            arr[least] = tmp;
        }
    }
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
        ps = 0;
        selection(arr, cnt);
        printf("%d ", ps);
        for(int b = 0; b < cnt; b++) {
            printf("%d", arr[b]);
            if(b < cnt-1) printf(" "); // to avoid Presentation Error.
        }
        printf("\n");
    }
}
