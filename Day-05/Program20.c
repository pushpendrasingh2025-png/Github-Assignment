#include<stdio.h>
int main()
{
    int n,p,largest_factor=1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    p=n;
    while(n%2==0)
    {
        largest_factor=2;
        n=n/2;
    }
    for(int i=3;i*i<=n;i=i+2)
    {
        while(n%i==0)
        {
            largest_factor=i;
            n=n/i;
        }
    }
    if(n>1)
    {
        largest_factor=n;
    }
    printf("The largest prime factor of %d is %d\n", p, largest_factor);
    return 0;
}