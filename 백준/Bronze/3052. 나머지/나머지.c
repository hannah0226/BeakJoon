#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a[42] = { 0 }, num, count = 0;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &num);
		a[num%42]+=1;
	}
	for (int i = 0; i < 42; i++)
		if (a[i] >= 1)
			count++;
	printf("%d", count);

}