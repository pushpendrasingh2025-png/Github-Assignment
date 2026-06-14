#include<stdio.h>
int main()
{
    int decimal,i,rem,binary=0,place=1;
    printf("Enter a decimal number: ");
    scanf("%d",&decimal);
    while(decimal!=0)
    {
        rem=decimal%2;
        binary=binary+(rem*place);
        decimal=decimal/2;
        place=place*10;
    }
    printf("The binary equivalent is: %d\n", binary);
    return 0;
}