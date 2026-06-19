#include<stdio.h>
int findmax(int n1,int n2)
{
    return (n1>n2) ? n1 : n2;
}
int main()
{
    int n1,n2;
    printf("Enter two numbers:");
    scanf("%d%d",&n1,&n2);
    int max=findmax(n1,n2);
    printf("Maximum between %d and %d is: %d",n1,n2,max);
    return 0;
}