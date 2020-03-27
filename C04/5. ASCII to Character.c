/*
 DESCRIPTION
 정수를 입력받아서 아스키코드 문자로 출력해보자.
 
 INPUT
 * Line 1 : 정수 d가 주어진다.

 OUTPUT
 * Line 1 : d에 해당하는 아스키코드 문자를 출력한다.

 SAMPLE INPUT
 97
 
 SAMPLE OUTPUT
 a
 
 HINT
 문자 자료형에 대해 공부해보자.

 만약 어렵다면 나중에 조건문을 배운 후에 다시 풀어보자.
 */

#include <stdio.h>

int main()
{
    char a;
    scanf("%d", &a);
    printf("%c", a);
}
