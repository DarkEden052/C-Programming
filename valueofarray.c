#include<stdio.h>
void main()
{
    int a[10];
    int i;
    int sum=0,avg;
    for (i=0;i<=9;i++)
    {
       printf("Enter the marks of Studentd :");
       scanf("%d",&a[i]);
    }
    for (i=0;i<=9;i++)
    {
        sum=sum+a[i];
    }
    for (i=0;i<=9;i++)
    {
        printf("\n%d",a[i]);
    }
    avg=sum/10;

    printf("\nAverage of Marks of Students :%d ",avg);
    return 0;

}
