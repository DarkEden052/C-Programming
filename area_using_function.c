#include<stdio.h>
#include<conio.h>
#include<math.h>
int circle();
int sq();
int rect();
int main(){
    float r;
    int s,l,b;
circle(r);
sq(s);
rect(l,b);
return 0;
}
int circle(int r){
    float a;
printf("Enter the Radius :");
scanf("%d",&r);
a=r*r*3.14;
printf("Area of Circle :%f",a);

}
int sq(int s){
printf("\nEnter the Side of Square :");
scanf("%d",&s);
printf("\nArea of Square is  :%d ",s*s);

}
int rect(int l,int b){
printf("\nEnter the Length of Rectangle  :");
scanf("%d",&l);
printf("\nEnter the Breadth of Rectangle  :");
scanf("%d",&b);
printf("\nArea of Rectangle  :%d",l*b);
}
