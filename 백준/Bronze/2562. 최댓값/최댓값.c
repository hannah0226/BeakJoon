#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a[10] = { 0 }, num, max = 0, count;
	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &num);
		a[i] = num;
	}
	for (int i = 0; i < 9; i++)
	{
		if (a[i] > max) 
		{
			max = a[i];
			count = i;
		}
	}
	printf("%d\n%d", max,count+1);
}