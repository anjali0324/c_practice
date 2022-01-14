/*SECTION 12
ROLL NO 21CY10005
NAME; ANJALI KUMARI
ASSIGNMENT NO :5c
DESCRIPTION: finding the second largest no.using an 1D array without sorting
*/

#include<stdio.h>
int  main()
{
    int A[10],B[10];
    int n1,n2,i,j,c,s;   /*n1 is no. of elements in array A, n2 is the no. of elements in array B*/

    printf("Enter first array size:\n");
    scanf("%d",&n1);
    printf("Enter %d elemets of first array:\n",n1);

    for(i=0;i<n1;i++)
    {
      scanf("%d",&A[i]);
      printf("Enter second array size: \n");
      scanf("%d",&n2);
      printf("Enter %d elemets of second array\n",n2);
    }
    for(i=0;i<n2;i++)
    {
      scanf("%d",&B[i]);
      printf("Enter 1 for intersection and 2 for union");
      scanf("%d",&c);
    if(c==1)
    {
    printf("intersection between A and B:");  /*calculating the intersection of A AND B*/
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(A[i]==B[j])
            printf("%d",A[i]);
        }
      }
     }
   }

     if(c==2)
    {
       printf("\n\t union of A and B\n");   /*PRINTING THE UNIOIN OF A AND B*/
       i=n1;
       s=n1+n2;
        for(i=n1,j=0;i<s;i++,j++)
       {
        A[i]=B[j];
       }

    for(i=0;i<s;i++)
    printf("%d",A[i]);


    }
    else
        printf("you entered wrong digit");

  return 0;

}
