#include<stdio.h>
#include<conio.h>
void main(){
    int a,b,c;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Value of a:%d\n",a);
    printf("Enter b:");
    scanf("%d",&b);
    printf("Value of b:\n",b);
    c=a;
    a=b;
    b=c;
    printf("New Value of a:%d\n",a);
    printf("New Value of b:%d\n",b);
    getch ();
}