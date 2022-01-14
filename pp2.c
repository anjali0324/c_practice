#include <stdio.h>
int main()
{
  int i,count,n;
  int factor;
  printf("enter the value of n:");
  scanf("%d",&n);
  count=0;
  printf("the factors of %d are:",n);
  for(i=1;i<=n;i++)
  {
      if(n%i==0)
      {
          printf("%d ",i);
          count++;

      }
  }
  printf("\nnumber of factors of n is:%d\n",count);

  return 0;

}
