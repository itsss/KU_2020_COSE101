//DESCRIPTION
//n이 x로 나누어떨어진다면 x는 n의 약수다.
//
//자연수 n의 약수의 갯수를 구해보자.
//
//INPUT
//* Line 1 : 입력 갯수 N
//
//* Line 2~N+1 : 자연수 n
//
//OUTPUT
//* Line 1 : n의 약수 갯수
//
//SAMPLE INPUT
//3
//24
//36
//47
//
//SAMPLE OUTPUT
//8
//9
//2

#include <stdio.h>

int main()
{
    int n, arr[100001];
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = 1; j <= arr[i]; j++) {
            if(arr[i] % j == 0) {
                sum++;
            }
        }
        printf("%d\n", sum);
    }
}
