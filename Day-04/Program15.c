#include<stdio.h>
int main()
{
    int p,n,r,s=0;
    printf("Enter any number:");
    scanf("%d",&n);
    p=n;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        s=s+r*r*r;
    }
    if(s==p)
        printf("%d is an Armstrong Number.",p);
    else
        printf("%d is not an Armstrong Number.",p);
    return 0;
}