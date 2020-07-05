/*
 DESCRIPTION
 정수 a, b, c, d, n 에 대해

 조건1: a × x + b × y를 n으로 나눈 나머지가 r이다.

 조건2: c × x + d × y를 n으로 나눈 나머지가 s이다.

 조건3: a × d - b × c와 n이 서로소다. (최대공약수가 1이다.)

 위의 세 가지 조건을 만족하는 0 이상 n 미만의 정수 x와 y는 반드시 존재하며, 한 가지밖에 없다는 사실이 이미 증명되어있다.

 x와 y를 구해보자.

  

 INPUT
 * Line 1 : n (2 ≤ n ≤ 100)

 * Line 2 : a, b, r (-10000 ≤ a,b ≤ 10000, 0 ≤ r ≤ n-1)

 * Line 3 : c, d, s (-10000 ≤ c,d ≤ 10000, 0 ≤ s ≤ n-1)

 OUTPUT
 * Line 1: 주어진 조건들을 만족하는 정수 x를 출력한다. (0 ≤ x ≤ n-1)

 * Line 2: 주어진 조건들을 만족하는 정수 y를 출력한다. (0 ≤ y ≤ n-1)

 SAMPLE INPUT
 16
 7 3 10
 2 5 9
 
 SAMPLE OUTPUT
 3
 7
 
 HINT
 혹시 계속 Wrong Answer가 나온다면 아래 코드를 실행해보고 다시 도전해보세요

 #include<stdio.h>
 int main(){
     if(-3%2 == 3%2){
         printf("same");
     }else{
         printf("not same");
     }
 }
 */

#include <stdio.h>

int gcd(int a, int b) {

  while (b != 0) {
    int temp = a % b;
    a = b;
    b = temp;
  }

  return a < 0 ? -a : a;
}

int main()
{
    int n, a, b, r, c, d, s;
    scanf("%d %d %d %d %d %d %d", &n, &a, &b, &r, &c, &d, &s);
    if(gcd((a*d)-(b*c), n) == 1)
    {
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                int x = i;
                int y = j;
                int eq1 = (a*x+b*y)%n;
                int eq2 = (c*x+d*y)%n;

                if(eq1 < 0) eq1 += n; // Exception
                if(eq2 < 0) eq2 += n;

                if(eq1 == r && eq2 == s)
                {
                    printf("%d\n%d", x, y);
                    break;
                }
            }
        }
    }
}
