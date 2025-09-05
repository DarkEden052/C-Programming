#include<stdio.h>
int sum(int n);
int main(){
    int n;
    printf("Enter a Number   :");
    scanf("%d",&n);
sum(n);
printf("Sum =%d",sum(n));
}
int sum(int n){
if(n==1){
    return 1;
}
int sumnm1=sum(n-1);
int sumn=sumnm1+n;
return sumn;

}
