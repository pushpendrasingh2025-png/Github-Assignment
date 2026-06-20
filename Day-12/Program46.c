#include<stdio.h>
int isarmstrong(int n)
{
    int s=0,r,p=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        s=s+(r*r*r);
    }
    return (p==s);
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(isarmstrong(n))
            printf("%d is an armstrong number.",n);
        else
            printf("%d is not an armstrong number.",n);
    return 0;
}