#include <stdio.h>
#include <string.h>

char arr[200][2][31];

void swapfunc(int j) {
    char temp[31];
    strcpy(temp, arr[j][1]);
    strcpy(arr[j][1], arr[j+1][1]);
    strcpy(arr[j+1][1], temp);
    strcpy(temp, arr[j][0]);
    strcpy(arr[j][0], arr[j+1][0]);
    strcpy(arr[j+1][0], temp);
}

void sort(int N) {
    for(int i = 0; i < N-1; i++) {
        for(int j = 0; j < N-1-i; j++) {
            if(strcmp(arr[j][1], arr[j+1][1]) > 0) {
                swapfunc(j);
            }
        }
    }
}

int main(void) {
    int N;
    scanf("%d", &N);
    for(int i = 0; i < N; i++) {
        scanf("%s", arr[i][0]);
        int val = strlen(arr[i][0]);
        for(int j = 0; j < val; j++) {
            if(arr[i][0][j] >= 97) {
                arr[i][1][j] = arr[i][0][j] - 32;
            }
            else arr[i][1][j] = arr[i][0][j];
        }
    }
    sort(N);
    for(int i = 0; i < N; i++) {
        printf("%s\n", arr[i][0]);
    }
}
