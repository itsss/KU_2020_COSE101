/*
 DESCRIPTION
 입력 받은 값을 형식에 맞춰 출력해보자.

 INPUT
 * Line 1 : 문자열 s (문자열의 길이는 최대 20글자)

 * Line 2 : 정수 n (-2000≤n≤2000)

 * Line 3 : 실수 r (-2000≤n≤2000)

 OUTPUT
 * Line 1 : s가 10글자 이하면 s 뒤에 공백을 붙여 10글자로 만들어서 출력하고 아니면 s를 그대로 출력한다.

 * Line 2 : n이 세 자리 수 이하면 n 앞에 0을 붙여 3자리로 만들어서 출력하고 아니면 n을 그대로 출력한다.

 * Line 3 : r 소수점 셋째자리에서 반올림한 값을 출력한다.

 SAMPLE INPUT
 Hello
 1
 2.7
 
 SAMPLE OUTPUT
 Hello
 001
 2.70
 
 HINT
 출력형식에 대해 공부해보자.

 반복문 없이도 간단하게 해결 가능한 문제지만 만약 못 풀겠다면 나중에 반복문을 배운 다음 다시 풀어도 된다.

 만약 Presentation Error가 발생했다면 공백, 줄바꿈이 제대로 되는지 확인한다.
 */

#include <stdio.h>
#include <string.h>

int main()
{
    char str[21];
    int a;
    float b;
    scanf("%s %d %f", str, &a, &b);
    str[strlen(str)+1] = '\0';
    printf("%-10s\n%03d\n%.2f", str, a, b);
}
