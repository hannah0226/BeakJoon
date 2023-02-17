#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int c, n, sum = 0, count = 0;
	float ave = 0;
	scanf("%d", &c);
	float* rat = malloc(sizeof(int) * c);
	for (int i = 0; i < c; i++)
	{
		scanf("%d", &n);
		int* score = malloc(sizeof(int) * n);
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &score[j]);
			sum += score[j];
		}
		ave = (float)sum / n;
		for (int j = 0; j < n; j++)
			if (score[j] > ave)
				count++;
		rat[i] = (float)count / n * 100;
		sum = 0;
		ave = 0;
		count = 0;
		free(score);
	}
	for (int i = 0; i < c; i++)
		printf("%.3f%%\n", rat[i]);
	free(rat);
}