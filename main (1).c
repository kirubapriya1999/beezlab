/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    printf("Before Swapping :%d %d",x,y);
    
    x=x+y;
    y=x-y;
    x=x-y;
    printf("\nAfter Swapping :%d %d",x,y);
    
}
