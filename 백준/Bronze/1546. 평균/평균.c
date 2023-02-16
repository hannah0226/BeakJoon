#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int n;
	float score,max=0,sum=0;
	scanf("%d", &n);
	float* arr = malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)//세준이 원래 점수 저장
	{
		scanf("%f", &score);
		arr[i] = score;
	}
	
	for (int i = 0; i < n; i++)//원래 점수 중 최댓값 구하기
		if (arr[i] > max)
			max = arr[i];

	for (int i = 0; i < n; i++) //새로운 점수 계산
	{
		arr[i] = arr[i] / max * 100;
		sum += arr[i];
	}

	printf("%f", sum / n);
}