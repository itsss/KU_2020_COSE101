/*
 DESCRIPTION
 본 수업은 연습문제 30점, 중간고사 30점, 기말고사 30점, 수업태도 10점으로 평가한다.

 연습문제 푼 갯수, 표절한 연습문제 갯수, 중간고사 점수, 기말고사 점수, 수업태도를 입력받고 점수를 계산해보자.

 연습문제는 총 100개다. 푼 연습문제 중 표절한 연습문제는 푼 것으로 인정하지 않는다.

 중간고사와 기말고사는 100점 만점이다.

 수업태도는 10점 만점이다.

 INPUT
 * Line 1 : 연습문제 푼 갯수 n (0 ≤ n ≤ 100)

 * Line 2 : 표절한 연습문제 갯수 m (0 ≤ m ≤ n)

 * Line 3 : 중간고사 점수 s1 (0 ≤ s1 ≤ 100)

 * Line 4 : 기말고사 점수 s2 (0 ≤ s2 ≤ 100)

 * Line 5 : 수업태도 a (0 ≤ a ≤ 10)

 OUTPUT
 * Line 1 : 총점을 소수점 첫째자리까지 반올림하여 출력한다.

 SAMPLE INPUT
 100
 5
 95
 80
 10
 
 SAMPLE OUTPUT
 91.0
 */

#include <stdio.h>

int main(){
    int n, m, s1, s2, a;
    float ans;
    scanf("%d %d %d %d %d", &n, &m, &s1, &s2, &a);
    ans = ((n-m)*0.3) + s1*0.3 + s2*0.3 + a;
    printf("%.1f", ans);
}
