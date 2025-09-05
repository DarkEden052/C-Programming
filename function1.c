#include<stdio.h>
void namaste();
void bonjour();
int main(){
    char ch;
    printf("i for Indian or f for french  :");
    scanf("%c",&ch);
    if(ch=='i'){
        namaste();}
        else {
            bonjour();
        }
       // else {printf("Sorry No Output");}

return 0;}
void namaste(){
printf("Namaste\n");
       }
void bonjour(){
printf("Bonjour\n");
}

