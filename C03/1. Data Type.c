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
