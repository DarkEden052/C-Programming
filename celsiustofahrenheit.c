#include<stdio.h>
#include<conio.h>
void main()
{
    float F,C;
    printf("Enter the Temp in celsius :");
    scanf("%f",&C);
    F=((C*9)/5)+32;
    printf("\nTemp in Fahrenheit :%f",F);
    getch();

}