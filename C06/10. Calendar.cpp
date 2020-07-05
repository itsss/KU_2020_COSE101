//DESCRIPTION
//스크루지씨는 엄청난 구두쇠라서 똑같은 달력을 나중에 재사용한다. Y년 달력은 언제 다시 쓰이게 될 지 계산해보자.
//
//달력은 그레고리력(양력)을 기준으로 한다. 똑같은 달력은 1월부터 12월까지 모든 날짜와 요일이 일치하는 달력을 의미한다.
//
//그레고리력에는 윤년(2월 29일이 있는 해)과 평년(2월 29일이 없는 해)이 있다. 윤년의 규칙은 다음과 같다.
//
//1. 4로 나누어지는 연도는 윤년이다.
//
//2. 그러나 100으로 나누어지는 연도는 평년이다.
//
//3. 그러나 400으로 나누어지는 연도는 윤년이다.
//
//이 규칙을 기준으로 달력이 똑같은 해를 계산해보자.
//
//INPUT
//* Line 1 : 입력의 갯수 N이 주어진다.
//
//* Line 2 ~ N+1 : 연도 Y가 주어진다. (1600≤ Y ≤5000)
//
//OUTPUT
//* Line 1~N : Y년 이후에 Y년도 달력과 똑같은 달력이 나오는 가장 빠른년도를 출력한다.
//
//SAMPLE INPUT
//3
//2019
//2020
//2021
//
//SAMPLE OUTPUT
//2030
//2048
//2027
//
//HINT
//조건문과 반복문을 사용해서 풀어도 되고, time.h 헤더를 활용해도 된다.

#include <stdio.h>

int check_date(int year, int month, int day)
{
    if(month <= 2)
    {
        month += 12;
        year--;
    }
    int mod = year%100;
    int div = year/100;
    return ((day + (26 * (month + 1) / 10) + mod + mod/4 + div/4 + 5*div )%7); // 요일 체크
}

int main()
{
    int N;
    scanf("%d", &N);
    
    for(int i = 0; i < N; i++) {
        int year;
        scanf("%d", &year);
        for(int j = year + 1; ; j++) {
            if(check_date(year,1,1) == check_date(j,1,1) && check_date(year,2,1) == check_date(j,2,1) && check_date(year,3,1)==check_date(j,3,1) && check_date(year,4,1) == check_date(j,4,1) && check_date(year,5,1) == check_date(j,5,1) && check_date(year,6,1) == check_date(j,6,1) && check_date(year,7,1) == check_date(j,7,1) && check_date(year,8,1) == check_date(j,8,1) && check_date(year,9,1) == check_date(j,9,1) && check_date(year,10,1) == check_date(j,10,1) && check_date(year,11,1) == check_date(j,11,1) && check_date(year,12,1) == check_date(j,12,1))
            {
              printf("%d\n",j); // 1월부터 12월까지 모든 경우에 대해 검사 시행
              break;
            }
        }
    }
}

