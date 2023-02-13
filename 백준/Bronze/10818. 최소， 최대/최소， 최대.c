#include<stdlib.h>
int main(void)
{
	int n, num, max=-10000000, min=10000000;
	scanf("%d", &n);
	int* a = malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num);
		a[i] = num;
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i] > max)
			max = a[i];
		if (a[i] < min)
			min = a[i];
	}
	printf("%d %d", min, max);
	free(a);
}