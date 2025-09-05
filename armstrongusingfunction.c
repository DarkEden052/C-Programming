
#include <stdio.h>
#include<conio.h>
 void main(){
      armstrong();
 getch();
 }


     int armstrong(){
    int number, sum = 0, lastdigit, temp;
    printf("Enter a number : ");
    scanf("%d", &number);
    temp = number;

    while(temp != 0){
        lastdigit = temp%10;
        sum = sum + (lastdigit*lastdigit*lastdigit);
        temp = temp/10;
    }

    if(sum == number){
        printf("%d is Armstrong Number \n", number);
    } else {
        printf("%d is not an Armstrong Number \n", number);
    }
    return 0;
     }


