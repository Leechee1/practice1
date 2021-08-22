#include <stdio.h>

int   main()
{
	int c, 行;
	行 = 0;
	while ((c = getchar()) != EOF)
		if (c == '\n')
			++行;

	printf("行数为：%d\n", 行);
    
    return 0;
}

