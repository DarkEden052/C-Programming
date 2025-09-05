#include<stdio.h>
#include<conio.h>
#include<math.h>
int fact(int n);
int main(){
    int n;
printf("Enter a Number :");
scanf("%d",&n);
fact(n);
return 0;
}
int fact(int n){
    if(n==0){
        return;
    }
    fact=(n-1)*n;
    fact( n);

}
