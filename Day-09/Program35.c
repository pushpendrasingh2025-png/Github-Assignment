#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("%c\t",'A'+i-1);
        }
        printf("\n");
    }
    return 0;
}