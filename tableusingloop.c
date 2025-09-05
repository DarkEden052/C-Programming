#include<stdio.h>
#include<conio.h>
int main(){
int i,n,t;
printf("Enter your choice for table :");
scanf("%d",&n);
for(i=1;i<=10;i++){
    t=i*n;
    printf("%d*%d=%d\n",i,n,t);
}
return 0;
}
