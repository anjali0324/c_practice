#include<stdio.h>
int main()
{
 const int ROWS=10;
 int row,col;
 for(row=1;row<=ROWS;++row)
 {
      for(col=1;col<=row;++col)
        printf(" ");
      for(col=1;col<=ROWS-row;++col)
        printf("*");
        printf("\n");
 }

    return 0;
}
