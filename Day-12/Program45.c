#include<stdio.h>
int ispalindrome(int n)
{
    int s=0,r,p=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        s=s*10+r;
    }
    return (p==s);
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(ispalindrome(n))
            printf("%d is a palindrome number.",n);
        else
            printf("%d is not a palindrome number.",n);
    return 0;
}