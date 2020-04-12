//DESCRIPTION
//마름모 모양을 출력하는 프로그램을 작성해보자.
//
//INPUT
//* Line 1 : 크기 n이 주어진다.
//
//OUTPUT
//* Line 1 ~ 2n+1 : 대각선의 길이가 각각 2n+1인 마름모를 출력한다.
//
//SAMPLE INPUT
//3
//
//SAMPLE OUTPUT
//  *
// ***
//*****
// ***
//  *

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++) printf(" ");
        for(int j = 0; j <= i*2; j++) printf("*");
        printf("\n");
    }

    for(int i = n-2; i >= 0; i--)
    {
        for(int j = i+1; j < n; j++) printf(" ");
        for(int j = 0; j <= i*2; j++) printf( "*" );
        printf("\n");
   }
}
