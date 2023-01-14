#include<stdio.h>
int main(void)
{
	int H, M, c;
	scanf("%d %d", &H, &M);
	
	if (M - 45 < 0)
	{
		if (H == 0)
			H= 23;
		else
			H--;
		c = M - 45;
		M = 60 + c;
	}
	else
		M = M - 45;
	printf("%d %d", H, M);
}