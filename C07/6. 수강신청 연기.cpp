#include <stdio.h>

int main() {
    int M;
    scanf("%d", &M);
    
    if(M <= 1800) { //11시 30분~12시
        if(M == 1800) printf("0 12 0 0\n");
        else {
            M+=1800;
            printf("0 11 %d %d\n", M/60, M%60);
        }
    }
    else if(M <= 16200) { //17시 이전
        if(M == 16200) printf("0 17 0 0\n");
        else {
            M+=45000;
            printf("0 %d ", M/3600);
            printf("%d %d", (M%3600)/60, (M%3600)%60);
        }
    }
    
    else { //17시 이후
        M -= 16200;
        printf("%d ", M/21600+1); // 일 수 계산
        M %= 21600;
        if(M == 7200) printf("12 0 0");
        else if(M < 7200) { // 점심시간 이전 및 점심시간
            printf("%d ", M/3600+10);
            printf("%d %d", (M%3600)/60, (M%3600)%60);
        }
        else { // 점심시간 이후
            printf("%d ", M/3600+11);
            printf("%d %d", (M%3600)/60, (M%3600)%60);
        }
    }
}
