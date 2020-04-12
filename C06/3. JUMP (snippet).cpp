//DESCRIPTION
//a이상 b미만의 n의 배수를 출력한다.
//
//* snippet judge 문제는 YOUR_CODE 부분만 제출하면 자동으로 아래의 Sample Code와 합쳐져서 실행됩니다.
//
//INPUT
//Line 1:a, b, n (-999 ≤ a ≤ b ≤ 999, 1 ≤ n ≤ 999)
//
//
//
//OUTPUT
//Line 1~: a이상 b미만의 n의 배수를 출력한다.
//
//SAMPLE CODE
//#include <stdio.h>
//int main()
//{
//    int a,b,n;
//    scanf("%d %d %d",&a,&b,&n);
//    YOUR_CODE
//    {
//       printf("%d\n",i);
//    }
//}
//SAMPLE INPUT
//25 36 4
//
//SAMPLE OUTPUT
//28
//32

#include <stdio.h>
int main()
{
    int a,b,n;
    scanf("%d %d %d",&a,&b,&n);
    for(int i = a; i < b; i++) if(i%n==0)
    {
       printf("%d\n",i);
    }
}
