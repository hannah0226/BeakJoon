#include<stdio.h>
int main(void)
{
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	if (a > 0)
		if (b > 0)
			printf("1");
		else
			printf("4");
	else if (a < 0)
		if (b > 0)
			printf("2");
		else
			printf("3");
}