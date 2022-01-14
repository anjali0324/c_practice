#include<stdio.h>
#include<math.h>
int main()
{
 int n,i;
 double limit;
 printf("enter the value of n:");
 scanf("%d",&n);
 limit=sqrt(n);
 i=2;
 while(i<=limit)
 {
     if(n%i==0)
     {
         printf("%d is not prime no.\n",n);
         break;
     }
     ++i;
 }
     if(i>limit)
        printf("%d is a prime no.\n",n);

 return 0;
}
