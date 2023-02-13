#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a[30] = { 0 }, num, correct, n[2] = { 0 };
	for (int i = 0; i < 28; i++)
	{
		scanf("%d", &num);
		a[i] = num;
	}
	for (int i = 1; i < 31; i++)
	{
		for (int j = 0; j < 30; j++)
		{
			if (i == a[j]) 
			{
				correct = 1;
				break;
			}
			else
				correct = 0;
		}
		if (correct == 0) 
		{
			if (n[0] == 0)
				n[0] = i;
			else 
			{
				n[1] = i;
				break;
			}
		}
	}
	printf("%d\n%d", n[0], n[1]);
}