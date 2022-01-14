#include<stdio.h>
int main()
{
 int factorial=1;
 int i=1;
 printf("enter the value of i:");
 scanf("%d",&i);

while(i<10){
    factorial*=i;
    if(factorial>100)
    {
        printf("the factorial below 100 is:%d",i);
        break;
    }
    i++ ;

}
    return 0;
}
