#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()


{

	int h1 , h2 ;
	int m1 , m2;
	int t1,t2 ;
	printf("请分别输入时和分");
	scanf("%d  %d", &h1 ,&m1);
	scanf("%d  %d", &h2, &m2);

	t1 = h1 * 60 + m1;
	t2 = h2 * 60 + m2;
	
	int T = t2 - t1;

	printf("%d", T);

	return 0;


}