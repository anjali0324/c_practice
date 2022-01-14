#include<stdio.h>
int main()
{
 int n,count,sum;
 printf("Enter the value of n:");
 scanf("%d",&n);
 sum=0;
 for(count=1;count<=n;count++)
 {
  sum+=count;
 }
 printf("the sum is:%d\n",sum);
 return 0;
}
