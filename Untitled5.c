#include<stdio.h>
int main()
{
 int i,n;
 char A[100];
 printf("enter the size of A:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {   scanf("%s",A);
     if(A[i]!=A[n-i-1])

        printf("not palindrome\n",A);

     else
        printf("palindrome\n",A);}

 return 0;
}
