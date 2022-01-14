#include<stdio.h>
int main()
{
int n,i,j,count;

printf("enter the value of n:");
scanf("%d",&n);

printf("\n prime numbers less than or equal to %d are:");

for(i=2;i<=n;i++)
{
  count=0;
  for(j=1;j<=i;j++)
    {
        if(i%j==0)
          count++;
    }
     printf("\n no. of prime number from 0 to n is:\n",i);



        if(count==2)
          printf("%d ",i);

}
        printf("\n no. of prime number from 0 to n is:\n",i);


return 0;

}
