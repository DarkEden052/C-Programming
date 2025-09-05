#include<stdio.h>
void main(){
    //Average of 3 numbers
    int a,b,c,Avg;
    printf("Enter a :-");
    scanf("%d",&a);
    printf("Enter b :-");
    scanf("%d",&b);
    printf("Enter c :-");
    scanf("%d",&c);
    Avg=(a+b+c)/3;
    printf("Avg=%d",Avg);
    return 0;
}