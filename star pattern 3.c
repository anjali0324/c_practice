#include<stdio.h>
int main()
{
 const int ROWS=10;
 int row,column;
 for(row=1;row<=ROWS;++row)
    {
        for(column=1;column<=row;++column)
            printf("*");
    printf("\n");
    }
    return 0;
 }

