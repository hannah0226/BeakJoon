#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int n,count=0;
	char score[80];
	scanf("%d", &n);
	int* num = malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) 
	{
		num[i] = 0;
	}
	for (int i = 0; i < n; i++)
	{
		scanf("%s", &score);
		for (int j = 0; j < 80; j++)
		{
			if (score[j] == 'O')
				count++;
			else if (score[j] == 'X')
				count = 0;
			else
				break;
			num[i] += count;
		}
		count = 0;
	}
	for (int i = 0; i < n; i++)
		printf("%d\n", num[i]);
	free(num);
}