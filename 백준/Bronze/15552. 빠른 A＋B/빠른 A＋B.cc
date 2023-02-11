#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int T, A, B;
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%d %d", &A, &B);
		printf("%d\n", A + B);
	}
}