#include<stdio.h>
int main()
{
    int n1,n2,LCM;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    LCM = (n1>n2) ? n1 : n2;
    while(1)
    {
        if(LCM%n1==0 && LCM%n2==0)
        {
            printf("LCM of %d and %d is %d", n1, n2, LCM);
            break;
        }
        LCM++;
    }
    return 0;
}