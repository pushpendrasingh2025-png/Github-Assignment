#include<stdio.h>
int main()
{
    int n,x;
    int result=1;
    printf("Enter base(x) and exponent(n): ");
    scanf("%d %d",&x,&n);
    for(int i=1;i<=n;i++)
    {
        result=result*x;
    }
    printf("The result of %d raised to the power of %d is: %d\n", x, n, result);
    return 0;
}