#include<stdio.h>
int main()
{
  int i,n,sum=0;
  char A[100];
  printf("please enter the value of number of elements in array A:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      if(A[i]<0)
        sum=sum-A[i];
      else sum=sum+A[i];}
      printf("the required sum is:%d",sum);

  return 0;

}
