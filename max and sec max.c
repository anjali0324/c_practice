#include<stdio.h>
int main()
{
 int N,next,max,second_max;
 printf("enter the value of N:");
 scanf("%d",&N);
 printf("enter %d numbers:",N);
 while(N>0)
 {
     scanf("%d",&next);
     if(next>max)

     {
         second_max=max;
         max=next;
     }
     else if(next>second_max)
     {
         second_max=next;
     }
     N--;
 }
 printf("MAXIMUM IS %d\n",max);
 printf("SECOND MAXIMUM IS %d\n",second_max);
 return 0;

}
