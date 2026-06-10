#include<stdio.h>
int main()
{
    int n,r,s=0,p;
    printf("Enter a number : ");
    scanf("%d",&n);
    p = n;
    while(n!=0)
    {
        r = n%10;
        s = s*10 + r;
        n = n/10;
    }
    if (p==s)
    {
        printf("The number is a palindrome.");
    }
    else
    {
        printf("The number is not a palindrome.");
    }
    return 0;
}