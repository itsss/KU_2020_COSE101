//DESCRIPTION
//자연수 n을 두 제곱수의 차로 나타내려고 한다.
//
//n = a2 - b2을 만족하는 음이 아닌 정수 a, b를 구해보자.
//
//INPUT
//Line 1: 입력의 갯수 N (0 ≤ N ≤ 100000)
//
//Line 2~N+1: 자연수 n (1 ≤ n ≤ 1000000)
//
//OUTPUT
//Line 1~N: n=a2 - b2 를 만족하는 음이 아닌 정수 a, b 순서쌍들 중 a가 가장 작은 경우를 출력한다. 만약 두 제곱수의 차로 나타내는 것이 불가능하다면 IMPOSSIBLE을 출력한다.
//
//SAMPLE INPUT
//5
//6
//24
//29
//25
//21
//
//SAMPLE OUTPUT
//IMPOSSIBLE
//5 1
//15 14
//5 0
//5 2
//
//HINT
//24=52-12=72-52=... 이고, a=5, b=1일 때 a가 가장 작다.


#include <stdio.h>
#include <math.h>

void square(int n) {
    int flag = 0;
    for(int i = (int)sqrt(n); i > 0; i--) {
        if(n % i == 0) {
            int cp = n / i;
            int a = (cp + i) / 2, b = (cp - i) / 2;
            if(a*2 == i+cp && !flag) {
                printf("%d %d\n", a, b);
                flag = 1;
                break;
            }
        }
    }
    if(flag == 0) {
        printf("IMPOSSIBLE\n");
    }
}

int main() {
    int N;
    scanf("%d", &N);
    
    for(int i = 0; i < N; i++) {
        int n;
        scanf("%d", &n);
        square(n);
    }
}
