#include<stdio.h>
int main()
{
  int i,j,k,temp;
  int a[5];
  for(i=0;i<5;i++)
  {
      printf("enter the elements of array:");
      scanf("%d",&a[i]);
  }
  for(i=0;i<4;i++)
  {
      k=i;
      for(j=i+1;j<5;j++)
      {
        if(a[j]<a[k])
            k=j;
      }
      temp=a[i];
      a[i]=a[k];
      a[k]=temp;
  }
    printf("soted array is:\n",&a[i]);
  return 0;

}
