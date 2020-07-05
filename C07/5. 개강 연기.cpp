#include <stdio.h>

int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

int priday_cal(int m, int d) {
    int cal_day = 0;
    for(int i = 0; i < m-1; i++) {
        cal_day += days[i]; // 전 달까지의 계산
    }
    cal_day += d;
    return cal_day;
}

void postday_cal(int d) {
    if(d > 365) d = d % 365;
    int cal_day = d, m = 0;
    for(m = 0; cal_day > days[m]; m++) {
        cal_day -= days[m];
    }
    printf("%d %d\n", m+1, cal_day);
}

int main(void)
{
    int N;
    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        int M, D, n;
        scanf("%d %d %d", &M, &D, &n);
        int pri_day = priday_cal(M, D);
        // printf("%d\n", pri_day);
        postday_cal(pri_day+n);
    }
}
