#include<stdio.h>
int main()
{
    int max,LCM,n1,n2,i;
    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);
    max = (n1 > n2) ? n1 : n2;
    while(1)
    {
        if(max % n1 == 0 && max % n2 == 0)
        {
            LCM = max;
            break;
        }
        max++;
    }
    printf("LCM of %d and %d is: %d", n1, n2, LCM);
    return 0;
}