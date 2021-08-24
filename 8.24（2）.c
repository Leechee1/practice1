#include<stdio.h>
int main()
{
	int a;
	int t = 1;
	scanf("%d", &a);
	while (a >= 10) {
		t++;
		a /= 10;
	}
	printf("位数为：%d", t);
	return 0;
}