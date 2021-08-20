 #define _CRT_SECURE_NO_WARNINGS

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int line = 0;

	printf("hello");

	while (line <= 10000)
	{

		printf("ÇÃÒ»ÐÐ´úÂë%d\n", line);

		line++;

	}

	if (line > 10000)
		printf("GOOD");



	return 0;
}