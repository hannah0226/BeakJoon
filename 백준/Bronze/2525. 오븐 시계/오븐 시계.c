#include<stdio.h>
int main(void)
{
	int H, M, T, h, m;
	scanf("%d %d", &H, &M);
	scanf("%d", &T);

	h = T / 60;
	m = T % 60;

	if (M + m >= 60)
	{
		H = H + h + 1;
		if (H >= 24)
			H = -(24 - H);
		M = -(60 - (M + m));
	}
	else 
	{
		H = H + h;
		if (H >= 24)
			H = -(24 - H);
		M = M + m;
	}
	printf("%d %d", H, M);
}