//DESCRIPTION
//자연수 n의 약수의 합을 출력해보자.
//
//INPUT
//Line 1: 입력의 갯수 N (1≤N≤100000)
//
//Line 2 ~ N+1: 자연수 n (1≤n≤100000)
//
//OUTPUT
//Line 1~N: n의 약수의 합
//
//SAMPLE INPUT
//3
//24
//36
//47
//SAMPLE OUTPUT
//60
//91
//48

#include <stdio.h>
 
int main()
{
    int n, arr[100001];
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        long long int sum = arr[i] + 1;
        for(int j = 2; j * j <= arr[i]; j++) {
            if(j * j == arr[i]) {
                sum += j;
                break;
            }
            else if(arr[i] % j == 0) {
                sum += j;
                sum += arr[i] / j;
            }
        }
        printf("%lld\n", sum);
    }
}
