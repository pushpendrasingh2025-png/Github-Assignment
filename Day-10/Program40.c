#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5-i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("%c",'A'+k-1);
        }
        for(int l=i-2;l>=0;l--)
        {
            printf("%c",'A'+l);
        }
        printf("\n");
    }
    return 0;
}