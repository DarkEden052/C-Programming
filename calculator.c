#include<stdio.h>
#include<conio.h>
int main(){
    char C;
    float a,b;
    printf("Enter Your Choice (+,-,*,/) :");
    scanf("%c",&C);
    printf("Enter Your Number 1:");
    scanf("%f",&a);
    printf("Enter Your Number 2:");
    scanf("%f",&b);
    switch (C) 
    {
        case '+':
        printf("%f",a+b);
        break;
        case '-':
        printf("%f",a-b);
        break;
        case '*':
        printf("%f",a*b);
        break;
        case '/':
        printf("%f",a/b);
        break;
    }
    return 0;
    }