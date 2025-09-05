#include<stdio.h>
#include<conio.h>
void table(int x);
int main(){
int h;
printf("Enter the Number  :");
scanf("%d",&h);
table(h);
return 0;

}
void table(int x){
int i;
for(i=1;i<=10;i++)
    printf("%d*%d=%d \n",x,i,i*x);
}

