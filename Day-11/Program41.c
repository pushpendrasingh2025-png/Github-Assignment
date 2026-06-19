#include<stdio.h>
int findsum(int n1,int n2)
{
    return n1+n2;
}
int main()
{
    int n1,n2;
    printf("Enter two numbers:");
    scanf("%d%d",&n1,&n2);
    int sum=findsum(n1,n2);
    printf("Sum of the two numbers is= %d",sum);
    return 0;
}