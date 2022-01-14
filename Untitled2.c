#include<stdio.h>
int main()
{
 int fact;
 int i;
 fact=1;
 i=1;
 while(i<5)
 {
  fact=fact*i;
  if(fact>700)
  {
   printf("factorial of %d is above 700 :",i);
   break;
  }
  else
  ++i;
  printf("the factorial is:%d\n",fact);
 }
 return 0;
}
