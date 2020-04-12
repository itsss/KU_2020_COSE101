//DESCRIPTION
//아래 그림과 같이 한 변의 길이가 1인 정n각형에 막대자석과 쇠구슬을 덧붙여 변의 길이를 2, 3, 4 ... a까지 늘려나가면서 장미 모양을 만들 때 쇠구슬과 막대자석은 몇 개가 필요할지 계산해보자.
//
//아래 그림은 정삼각형, 정삼각형, 정오각형을 각각 길이 4까지 이어붙인 모양이다.
//
//INPUT
//Line 1: 입력의 수 N (1 ≤ N ≤ 100000)
//
//Line 2 ~ N+1 : 다각형 변의 갯수 n, 변의 최대 길이 a (1 ≤ n,a ≤ 100000)
//
//OUTPUT
//Line 1 ~ N: 필요한 쇠구슬의 수와 자석의 수
//
//SAMPLE INPUT
//3
//3 5
//4 4
//5 3
//
//SAMPLE OUTPUT
//21 25
//25 28
//22 24

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    for(int i = 0; i < N; i++) {
        long long int a, b;
        scanf("%lld %lld", &a, &b);
        long long int ans1 = a + b-1 + (a - 2) * ((b * (b + 1)) /2 - 1);
        long long int ans2 = b * a + (a - 2) * (b - 1) * b / 2;
        printf("%lld %lld\n", ans1, ans2);
    }
}
