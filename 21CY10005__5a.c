/*SECTION 12
ROLL NO 21CY10005
NAME; ANJALI KUMARI
ASSIGNMENT NO :5a
DESCRIPTION: finding the number closest to zero
*/
#include<stdio.h>
int main()
{
 int a[100],s[100];     /* i have taken the help of another array s[100]*/
 int i,j,n,num,min,b,flag;
 printf("enter the array size:");   /* printing instruction to give array size*/
 scanf("%d",&n);
 printf("enter the elements of array:");  /*user will enter the elements of array a*/
 for(i=0;i<n;i++)
 { scanf("%d",&a[i]);
 num=0;
 for(i=0;i<n;i++)
 {
     if(num<a[i])
        s[i]=a[i]-num;
     else
        s[i]=num-a[i];
        min=s[0];
 }
 for(i=1;i<n;i++)
 {

     if(s[i]<min)
        min=s[i];}
     b=num-min;
 for(i=0;i<n;i++)
    if(b==s[i])
 {
     flag=1;
     break;
 }
 if(flag==1)
    printf("%d",b);
 else
    printf("%d",2*min+b);

 }

 return 0;
}
