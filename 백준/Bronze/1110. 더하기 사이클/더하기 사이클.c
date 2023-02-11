#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int first_num, n,n1,n2,m,m2,new=0,count=0;
	scanf("%d", &n);
	first_num = n;
	do {
		n1 = n / 10;
		n2 = n % 10;
		m = n1 + n2;
		m2 = m % 10;
		new = n2 * 10 + m2;
		n = new;
		count++;
	} while (first_num != new);
	printf("%d", count);
}