#include<stdio.h>
int main(){
    int a[20],i,n,x;
    printf("Enter the number of Elements \n");
    scanf("%d",&n);
    printf(" Total Elements are : %d \n ",n);
    printf("Enter the elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        printf(" %d %d \n",i+1,a[i]);
    }
    printf("\n Enter the elements to Search :");
    scanf("%d",&x);
    for (i=0;i<n;i++)
    {
        if (a[i]==x)
        {
            break;
        }
    }
    if (i<n)
    {
        printf("\nElement is Founded at index :%d ",i+1);

    }
    else
    {
        printf("Error! Element NOT FOUNDED");
    }
    return 0;
}
