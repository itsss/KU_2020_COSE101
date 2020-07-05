/*
 DESCRIPTION
 테라바이트(TB) 단위의 저장 용량을 테라바이트(TB), 기가바이트(GB), 메가바이트(MB), 킬로바이트(KB), 바이트(B) 단위로 각각 출력해보자.

 (1TB=1024GB, 1GB=1024MB, 1MB=1024KB, 1KB=1024B)

 INPUT
 * Line 1 : 정수 a가 주어진다.

 OUTPUT
 * Line 1 : a TB

 * Line 2 : a TB를 GB로 변환한 값

 * Line 3 : a TB를 MB로 변환한 값

 * Line 4 : a TB를 KB로 변환한 값

 * Line 5 : a TB를 Byte로 변환한 값

 SAMPLE INPUT
 4
 
 SAMPLE OUTPUT
 4TB
 4096GB
 4194304MB
 4294967296KB
 4398046511104B
 
 HINT
 1. 나중에 for문을 배운 다음 for문을 사용하여 다시 풀어보자.

 2. 나중에 함수를 배운 다음, 재귀함수를 사용하여 다시 풀어보자.
 */

#include <stdio.h>

int main()
{
    long long int a;
    scanf("%lld", &a);
    printf("%lldTB\n", a);
    printf("%lldGB\n", a*1024);
    printf("%lldMB\n", a*1024*1024);
    printf("%lldKB\n", a*1024*1024*1024);
    printf("%lldB", a*1024*1024*1024*1024);
}
