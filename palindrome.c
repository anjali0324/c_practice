#include<stdio.h>
int main()
{
    char A[10];
    int i,n,flag;
    printf("enter the size of A:");
    scanf("%d",&n);

    printf("please enter the characters of string A: ");
    scanf("%s",A);
    for(i=0;i<n;i++){
            int x = -2;

        if(A[i]==A[x]){
            x--;
            continue;}
        else{
            printf(" %s is not a palindrome.\n",A);
            break;
        }}

            printf("%s is a palindrome.\n",A);
    return 0;
}
