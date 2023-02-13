#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a[30] = { 0 }, n[30] = { 0 }, num;
	for (int i = 0; i < 28; i++)
	{
		scanf("%d", &num);
		a[i] = num;
	}
	for (int i = 0; i < 28; i++)
		for (int j = 0; j < 30; j++)
			if (a[i] == j+1)
				n[j] = 1;
	for (int i = 0; i < 30; i++)
		if (n[i] == 0)
			printf("%d\n", i + 1);
}