#include<stdio.h>
int main()
{
 const int ROWS=10;
 const int COL=10;
 int row,col;
 for(row=1;row<=ROWS;row++)
 {
     for(col=1;col<=COL;col++)
     {
         printf("*");
     }
     printf("\n");
 }
 return 0;
}

