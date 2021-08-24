#include<stdio.h>

int main()
{
	int a;
	int t=0;
	scanf("%d", &a);
	
	do {
		t++;
		a /= 10;

	} while (a > 0);

	printf("位数为：%d", t);
	return 0;
}