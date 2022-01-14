#define SIZE 25
#include<stdio.h>
int main()
{
    int i,length;
    char A[SIZE];
    char B[SIZE];
    char C[SIZE];
       length=0;
    printf("please enter the characters of string A:");
    scanf("%s",A);
    printf("please enter the characters of string B:");
    scanf("%s",B);
    for(i=0;i<SIZE;i++)

        C[i]=A[i];
    for(i=0;C[i]!=0;i++)

       /* length++;
        printf("length is :%d\n",length);*/
     for(i=0;i<SIZE;i++)
        C[i]=B[i];
        printf("C is:%s%s\n",A,B);


    return 0;
}
