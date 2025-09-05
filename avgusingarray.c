#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10];
    int n,i;
    float sum=0,avg=0;
    printf("Enter the Number of Students :");
    scanf("%d",&n);
    printf("\n Enter the Marks :");
    for (i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=1;i<=n;i++)
    {
    sum=sum+a[i];
    avg=sum/n;
    }
    printf("\nAverage of Marks of Students :%d ",avg);
    getch();

}