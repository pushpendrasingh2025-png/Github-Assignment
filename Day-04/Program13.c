#include<stdio.h>
int main()
{
    int i,a=0,b=1,c,n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("Fibonacci series: ");
    for(i=1;i<=n;i++)
    {
        printf("%d ",a);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}