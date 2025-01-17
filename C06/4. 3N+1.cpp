//DESCRIPTION
//어떤 자연수 N이 짝수라면 2로 나누고 홀수라면 3N+1로 만드는 과정을 N==1이 될 때까지 계속 반복해보자.
//
//모든 자연수가 이 과정을 거쳐 언젠가 1이 되는건지는 아직 증명되지 않았다. 하지만 이 문제에서는 반드시 1이 된다고 가정해도 좋다.
//
//INPUT
//* Line 1 : 정수 N이 입력된다. (1 ≤ N ≤ 100000)
//
//OUTPUT
//* Line 1 ~ : N=1이 될때까지 한 줄씩 출력한다.
//
//SAMPLE INPUT
//20
//
//SAMPLE OUTPUT
//20
//10
//5
//16
//8
//4
//2
//1


#include <stdio.h>

void f(int n) {
    printf("%d\n", n);
    if(n == 1);
    else {
        if(n % 2 == 0) f(n/2);
        else f(3*n+1);
    }
}

int main()
{
    int a;
    scanf("%d", &a);
    f(a);
}
