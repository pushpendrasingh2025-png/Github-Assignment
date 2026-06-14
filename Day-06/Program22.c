#include<stdio.h>
int main()
{
    int binary,decimal=0,place=1,rem;
    printf("Enter a binary number: ");
    scanf("%d",&binary);
    while(binary!=0)
    {
        rem=binary%10;
        decimal=decimal+(rem*place);
        binary=binary/10;
        place=place*2;
    }
    printf("The decimal equivalent is: %d\n", decimal);
    return 0;
}