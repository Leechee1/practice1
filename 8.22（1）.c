#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int  main()
{
	int c;
	c = getchar();
	while (c != EOF)
	{
		putchar(c);
		c = getchar();
	}

}

//注意在输入后，需要回车在新一行输入  ctrl+f2  以表示输入结束