#include<stdio.h>
int main()
{
    int n,i,a=0,b=1,c;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    if(n==1)
    {
        printf("Fibonacci term is %d",a);
    }
    else if(n==2)
    {
        printf("Fibonacci term is %d",b);
    }
    else
    {
        for(i=3;i<=n;i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        printf("Fibonacci term is %d",c);
    }
    return 0;
}