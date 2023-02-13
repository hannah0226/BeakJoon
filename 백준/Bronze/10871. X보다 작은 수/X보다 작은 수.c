#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int n, num, x;
	scanf("%d %d", &n, &x);
	int* a = malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num);
		a[i] = num;
	}
	
	for (int i = 0; i < n; i++)
	{
		if (a[i] < x)
			printf("%d ", a[i]);
	}
	free(a);
}