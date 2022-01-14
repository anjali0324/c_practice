/*SECTION 12
ROLL NO 21CY10005
NAME; ANJALI KUMARI
ASSIGNMENT NO 5b
DESCRIPTION: finding the second largest no.using an 1D array without sorting
*/

#include <stdio.h>

  int  main()
{

  int n,i,j=0,largest,second_largest;
  int arr[20];

       printf("Input the size of array : ");
       scanf("%d", &n);
       printf("Input %d elements in the array :\n",n); /*storing the values of integers in array as its elements*/
       for(i=0;i<n;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&arr[i]);
            }

        largest=0;  /* find location of the largest element in the array */

       for(i=0;i<n;i++)
      {
          if(largest<arr[i])
	          {
                largest=arr[i];
                j = i;
              }
      }

           second_largest=0;
      for(i=0;i<n;i++)
 {
            if(i==j)
             {
                i++;  /* ignoring the largest element */
		        i--;
        }
      else
        {
          if(second_largest<arr[i])
	     {
               second_largest=arr[i];
             }
        }
 }

  printf("The Second largest element in the array is :  %d \n\n", second_largest);

  return 0;
}
