#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int a, b;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		printf("%d\n", a + b);
	}
}