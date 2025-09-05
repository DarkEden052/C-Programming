#include<stdio.h>
#include<conio.h>
void prices(float x);
int main(){
float x;
printf("Enter the Value :");
scanf("%f",&x);
prices(x);
printf("The value is :%f",x);

}
void prices(float x){
 float value = 0.181*x+x;
 printf("The Final Value is :%f\n",value);

}
