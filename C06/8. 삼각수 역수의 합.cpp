//DESCRIPTION
//주어진 자연수 n에 대하여 아래 계산식의 결과값을 구해보자.
//
//1/(1) + 1/(1+2) + ... +1/(1+2+...+n)
//
//INPUT
//* Line 1 : 입력의 갯수 N (1 ≤ N ≤ 10000)
//
//* Line 2~N+1 : n이 주어진다. (1 ≤ n ≤ 1000000)
//
//OUTPUT
//* Line 1~N : 1/(1) + 1/(1+2) + ... +1/(1+2+...+n) 를 소수점 일곱번째자리에서 반올림하여 출력한다.
//
//SAMPLE INPUT
//3
//3
//5
//100
//
//SAMPLE OUTPUT
//1.500000
//1.666667
//1.980198

#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    
    for(int i = 0; i < N; i++) {
        int num = 0;
        double ans = 0;
        scanf("%d", &num);
        
        ans = 2.0 * (1.0 - (1.0 / (num + 1.0)));
        printf("%.6lf\n", ans);
    }
}
