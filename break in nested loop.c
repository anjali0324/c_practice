#include<stdio.h>
int main()
{
 int N,i,sum;
 printf("enter the value of N:");
 scanf("%d",&N);
 sum=0;
 for(i=1;i<=N;++i)
 {
     sum=sum+i*i;
 }
 printf("SUM OF THE SQUARES OF N NATURAL NUMBERS IS:%d\n",sum);


 return 0;
}
