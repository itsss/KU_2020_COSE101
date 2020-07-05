//DESCRIPTION
//가로 n칸짜리 원고지에 1부터 m까지 순서대로 써보자.
//
//이 때, 원고지에는 한 칸에 숫자 하나만 쓸 수 있다.
//
//INPUT
//* Line 1 : 원고지의 가로 칸 수 n이 입력된다. (1≤n≤100)
//
//* Line 2 : 써내려갈 숫자의 최댓값 m이 입력된다. (1≤m≤1000)
//
//OUTPUT
//* Line 1~ : 가로 n칸짜리 원고지에 1부터 m까지 적은 결과를 출력한다.
//
//SAMPLE INPUT
//5
//15
//
//SAMPLE OUTPUT
//12345
//67891
//01112
//13141
//5

#include <stdio.h>

int main()
{
    int n, m, wc=0;
    scanf("%d %d", &n, &m);
    for(int i = 1; i <= m; i++)
    {
        if(i < 10)
        {
            printf("%d", i);
            wc++;
        }

        if(i >= 10 && i < 100)
        {
            if(wc >= n-1)
            {
                int cp=i, a, b;
                a = cp%10;
                cp = cp / 10;
                b = cp%10;
                printf("%d\n%d", b, a);
                wc = 1;
                continue;
            }
            else
            {
                if(wc >= n)
                {
                    printf("\n");
                    wc = 0;
                }
                printf("%d", i);
                wc += 2;
            }
        }

        else if(i >= 100 && i < 1000)
        {
            if(wc >= n-2)
            {
                int cp=i, a, b, c;
                a = cp%10;
                cp = cp / 10;
                b = cp%10;
                cp = cp / 10;
                c = cp%10;
                if(wc == n-2) {
                    printf("%d%d\n%d", c, b, a);
                    wc = 1;
                }
                if(wc == n-1) {
                    printf("%d\n%d%d", c, b, a);
                    wc = 2;
                }
                continue;
            }
            else
            {
                if(wc >= n)
                {
                    printf("\n");
                    wc = 0;
                }
                printf("%d", i);
                wc += 3;
            }
        }

        else if(i == 1000)
        {
            if(wc >= n-3)
            {
                int cp=i, a, b, c, d;
                a = cp%10;
                cp = cp / 10;
                b = cp%10;
                cp = cp / 10;
                c = cp%10;
                cp = cp / 10;
                d = cp%10;
                if(wc == n-3) {
                    printf("%d%d%d\n%d", d, c, b, a);
                    wc = 1;
                }
                else if(wc == n-2) {
                    printf("%d%d\n%d%d", d, c, b, a);
                    wc = 2;
                }
                else if(wc == n-1) {
                    printf("%d\n%d%d%d", d, c, b, a);
                    wc = 3;
                }
                else if(wc == n) {
                    printf("\n%d", i);
                    wc += 4;
                }
                break;
            }
        }

        if(wc % n == 0)
        {
            printf("\n");
            wc = 0;
        }
    }
}
