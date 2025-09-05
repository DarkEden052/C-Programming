#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,c;
    printf("Enter a :-");
    scanf("%d",&a);
    printf("Enter b :-");
    scanf("%d",&b);
    printf("Enter c :-");
    scanf("%d",&c);
    if (a<b&&a<c)
    {printf("a is smallest");}
    else
    if (b<a&&b<c)
    {printf("b is smallest");}
    else {printf("c is smallest");}
    return 0;
}