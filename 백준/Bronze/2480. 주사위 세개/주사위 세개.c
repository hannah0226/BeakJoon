#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int a, b, c, money, max;
	scanf("%d %d %d", &a, &b, &c);
	if (a == b && b == c)
		money = 10000 + a * 1000;
	else if ((a == b && a != c) || (a == c && a != b))
		money = 1000 + a * 100;
	else if ((b == a && b != c) || (b == c && b != a))
		money = 1000 + b * 100;
	else if ((c == a && c != b) || (c == b && c != a))
		money = 1000 + c * 100;
	else
	{
		if (a > b && a > c)
			max = a;
		else if (b > a && b > c)
			max = b;
		else
			max = c;
		money = max * 100;
	}
	printf("%d", money);
}