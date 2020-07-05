/*
 DESCRIPTION
 문자를 입력받아서 아스키코드 값으로 출력해보자.
 
 INPUT
 * Line 1 : 문자 c가 주어진다.

 OUTPUT
 * Line 1 : c의 아스키코드 값을 출력한다.

 SAMPLE INPUT
 a
 
 SAMPLE OUTPUT
 97
 
 HINT
 문자 자료형에 대해 공부해보자.

 만약 어렵다면 나중에 조건문을 배운 후에 다시 풀어보자.
 */

#include <stdio.h>

int main()
{
    char a;
    scanf("%c", &a);
    printf("%d", a);
}
