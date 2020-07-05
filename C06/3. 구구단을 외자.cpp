//DESCRIPTION
//구구단 표를 만들어서 구구단을 외우려고 한다.
//
//구구단 n단을 출력해보자.
//
//INPUT
//* Line 1 : 정수 n (0 ≤ n ≤ 9 )
//
//OUTPUT
//* Line 1~9 : n에 1 부터 9까지 곱한 값을 각 줄에 출력한다.
//
//SAMPLE INPUT
//9
//
//SAMPLE OUTPUT
//9 X 1 = 9
//9 X 2 = 18
//9 X 3 = 27
//9 X 4 = 36
//9 X 5 = 45
//9 X 6 = 54
//9 X 7 = 63
//9 X 8 = 72
//9 X 9 = 81

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= 9; i++) {
        printf("%d X %d = %d\n", n, i, n*i);
    }
}

