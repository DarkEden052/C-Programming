#include<stdio.h>
void hw(int c);
int main(){
    int n;
    printf("Enter a Number  :");
    scanf("%d",&n);
hw(n);
return 0;
}
void hw(int c){
if(c==0){
    return;
}
printf("Hello World\n ");
hw(c-1);
}
