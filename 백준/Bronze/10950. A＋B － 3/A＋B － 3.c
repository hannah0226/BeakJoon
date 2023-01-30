#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
int main(void)
{
	int n,a,b;
	scanf("%d", &n);
	int* arr = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &a, &b);
		arr[i] = a + b;
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d\n", arr[i]);
	}
}