#include<stdio.h>
int main()
{
    int i,n;
  printf("enter the value of n:");
  scanf("%d",&n);
  if(n>0)
  {
    for(i=0;i<=n;i++)

      { printf("the integers from 0 to n are:");
             for(i=0;i<n;i++)
               printf("%d,",i);
      }
  }

      else
        printf("please enter a positive integer.");

  printf("%d",i);

  return 0;


}
