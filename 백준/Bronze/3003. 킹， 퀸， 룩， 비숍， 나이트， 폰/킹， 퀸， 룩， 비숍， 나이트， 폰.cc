#include<stdio.h>
int main(void)
{
    int K,Q,R,B,N,P;
    scanf("%d %d %d %d %d %d",&K,&Q,&R,&B,&N,&P);
    printf("%d %d %d %d %d %d",1-K,1-Q,2-R,2-B,2-N,8-P);
}