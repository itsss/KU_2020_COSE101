//DESCRIPTION
//13 + 23 + ... + n3을 구해보자.
//
//INPUT
//* Line 1: 입력의 갯수 N (1 ≤ N ≤ 100000)
//
//* Line 2~N+1 : n이 주어진다. (1 ≤ n ≤ 20000)
//
//OUTPUT
//* Line 1~N : 13 + 23 + ... + n3의 값을 구한다.
//
//SAMPLE INPUT
//2
//3
//5
//
//SAMPLE OUTPUT
//36
//225
//
//HINT
//1+8+27=36

#include <stdio.h>
#include <math.h>
 
int main() {
    int n;
    long long int arr[100001];
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
        printf("%lld\n", ((arr[i] * (arr[i] + 1)) / 2) * ((arr[i] * (arr[i] + 1)) / 2) );
    }
}
