#include<stdio.h>
int main(void)
{
    int a,b,one,two,three,result;
    scanf("%d",&a);
    scanf("%d",&b);
    three=a*(b/100);
    b=b%100;
    two=a*(b/10);
    b=b%10;
    one=a*b;
    result=one+(two*10)+(three*100);
    printf("%d\n%d\n%d\n%d",one,two,three,result);
}