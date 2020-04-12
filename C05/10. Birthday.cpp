//DESCRIPTION
//사람 n명이 모여있을 때, 이 중 서로 생일이 같은 사람이 있을 확률을 구해보자. 단, 이 사람들 중 2월 29일생은 없다고 가정한다.
//
//INPUT
//* Line 1 : 입력 갯수 N (1≤N≤100000)
//* Line 2 ~ N+1: 사람 수 n (0≤n≤100000)
//
//OUTPUT
//* Line 1 : n명의 사람들 중 생일이 같은 사람이 있을 확률을 소수점 여섯번째자리에서 반올림하여 출력한다.
//
//SAMPLE INPUT
//3
//25
//36
//47
//
//SAMPLE OUTPUT
//0.56870
//0.83218
//0.95477
//
//HINT
//만약 어렵다면 여집합, 여사건에 대해 공부해보자.

#include <stdio.h>
#include <math.h>

int main() {
    int N;
    scanf("%d", &N);

    for(int a = 0; a < N; a++) {
        int n;
        scanf("%d", &n);

        double res = 1;
        for(int i = 1; i < n; i++) { // 2번째부터 처리
            res *= (365.00-(double)(i)) / (365.00);
        }

        res = 1-res;
        res = res * 100000;
        res = round(res);
        res = res / 100000;
        printf("%.5lf\n", res);
    }
}
