#include<stdio.h>
int isperfect(int n)
{
    int s=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
            s=s+i;
    }
    return (s==n);
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(isperfect(n))
            printf("%d is a perfect number.",n);
        else
            printf("%d is not a perfect number.",n);
    return 0;
}