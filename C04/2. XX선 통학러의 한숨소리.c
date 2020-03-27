/*
 DESCRIPTION
 지하철 XX선은 지연이 매우 잦기로 악명이 높다.

 학교에 가려면 XX선을 타는 방법 밖에 없는 조교는 혹시나 하는 일말의 실낱같은 희망을 가지고 XX선으로 통학하려고 하였으나 한결같은 XX선은 오늘도 역시나 기대를 저버리지 않고 오늘도 지연되고야 말았다.

 원래 도착했어야 할 시간과 실제 도착 시간을 입력받아 대체 몇 분 지연된 건지 계산해보자.

 INPUT
 * Line 1 : 이론상 도착 시각 시, 분, 초

 * Line 2 : 실제 도착 시각 시, 분, 초 (XX선은 절대 이론상 도착시간보다 이른 시간에 도착하지 않는다.)

 OUTPUT
 * Line 1 : 지연된 시간의 시, 분, 초를 출력한다.

 SAMPLE INPUT
 9 34 50
 10 24 32
 
 SAMPLE OUTPUT
 0 49 42
 
 HINT
 당장 해결이 어렵다면 나중에 if를 배운 다음 다시 도전해봅시다.
 */

#include <stdio.h>

int main(){
    int a, b, c;
    int d, e, f;
    int cur, del, s;
    int m, h;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    cur = a*3600+b*60+c;
    del = d*3600+e*60+f;
    s = del - cur;
    m = s / 60;
    h = m / 60;
    s = s % 60;
    m = m % 60;
    printf("%d %d %d", h, m, s);
}
