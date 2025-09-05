#include<stdio.h>
#include<conio.h>
void main()
{
    //program for Marks and there grades
    int marks;
    printf("Enter Your Marks :");
    scanf("%d",&marks);
    if (marks>75&&marks<=100)
    {
        printf("Excellent");
    }
    else
    if (marks>60&&marks<=75)
    {
        printf("Very Good");
    }
    else
    if (marks>45&&marks<=60)
    {
        printf("Good");
    }
    else printf("Wrong Input");
    getch();


}
