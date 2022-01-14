#include<stdio.h>
int main()
{
  int i,n,sum=0;
  int A[100];
  int B[100];
  int C[100];
  printf("please enter the value of number of elements in array A:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
 {
      printf("enter the elements of array A:");
      scanf("%d",&A[i]);
      printf("the given array is:%d\n",A[i]);

      if(A[i]>0)

             B[i]=A[i];
             printf("positive numbers of the given array are:%d\n",B[i]);

      if(A[i]<0)

           C[i]=A[i];
           printf("negative numbers of the given array are:%d\n",C[i]);

 }


  return 0;
}

