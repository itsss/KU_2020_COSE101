/*
 DESCRIPTION
 자료형에 대해 공부해보고 각 자료형의 크기와 범위를 출력해보자.

 INPUT
 OUTPUT
 Line 1~8 : char, short, int, long, unsigned char, unsigned short, unsigned int, unsigned long의 크기와 최솟값, 최댓값을 출력한다.

 이 때 크기는 1Byte인 경우, "Byte"로 출력하고 2Bytes 이상인 경우 "Bytes"로 출력한다.

 SAMPLE INPUT
 
 SAMPLE OUTPUT
 char: 1 Byte, -128 ~ 127
 short: ? Bytes, ??? ~ ???
 int: ? Bytes, ??? ~ ???
 long: ? Bytes, ??? ~ ???
 unsigned char: ? Byte, ??? ~ ???
 unsigned short: ? Bytes, ??? ~ ???
 unsigned int: ? Bytes, ??? ~ ???
 unsigned long: ? Bytes, ??? ~ ???
 
 HINT
 운영체제별로 자료형의 크기는 다를 수 있습니다. 숫자를 직접 출력하려 하지 말고 sizeof 함수를 사용해보세요.

 최댓값과 최솟값은 limits.h 헤더를 사용하면 쉬울 것입니다.
 */

#include <stdio.h>
#include <limits.h>

int main()
{
	printf("char: %d Byte, %d ~ %d\n", sizeof(char), CHAR_MIN, CHAR_MAX);
	printf("short: %d Bytes, %d ~ %d\n", sizeof(short), SHRT_MIN, SHRT_MAX);
	printf("int: %d Bytes, %d ~ %d\n", sizeof(int), INT_MIN, INT_MAX);
	printf("long: %d Bytes, %ld ~ %ld\n", sizeof(long), LONG_MIN, LONG_MAX);
	printf("unsigned char: %d Byte, 0 ~ %u\n", sizeof(unsigned char), UCHAR_MAX);
	printf("unsigned short: %d Bytes, 0 ~ %u\n", sizeof(unsigned short), USHRT_MAX);
	printf("unsigned int: %d Bytes, 0 ~ %u\n", sizeof(unsigned int), UINT_MAX);
	printf("unsigned long: %d Bytes, 0 ~ %lu\n", sizeof(unsigned long), ULONG_MAX);

	return 0;
}
